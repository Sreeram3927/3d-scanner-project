port = 'COM3';
baudrate = 9600;
cmd = 'n';

arduino = serialport(port, baudrate);
fopen(arduino);

scanData = zeros(70, 41, 'uint16');
for i = 1:5
    while arduino.NumBytesAvailable == 80; end
    recieved_data = fscanf(arduino, '%u', [1, 41]);
    scanData(i, :) = recieved_data;
end
fclose(arduino);
delete(arduino);