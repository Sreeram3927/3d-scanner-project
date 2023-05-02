port = 'COM3';
baudrate = 9600;
cmd = 'n';

arduino = serialport(port, baudrate);
%arduino.Timeout = 10;
fopen(arduino);

scanData = zeros(70, 25, 'uint16');

for i = 1:5
 %   while arduino.NumBytesAvailable == 80; end
    recieved_data = fscanf(arduino, '%d');
    scanData(i, :) = recieved_data(1:25);
  %disp(recieved_data);
end

disp(scanData);

fclose(arduino);
delete(arduino);