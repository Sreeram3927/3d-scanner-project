port = 'COM3';
baudrate = 9600;
%cmd = 'n';

arduino = serial(port, baudrate);
arduino.Timeout = 10;
fopen(arduino);

scanData = zeros(70, 25, 'uint16');

for i = 1:70
 %   while arduino.NumBytesAvailable == 80; end
    recieved_data = fscanf(arduino, '%d');
    scanData(i, :) = recieved_data(1:25);
  %disp(recieved_data);
end

disp(scanData);

fclose(arduino);
delete(arduino);



coordX = zeros(70, 25);
coordY = zeros(70, 25);
coordZ = zeros(70, 25);

angle = deg2rad(14.4);

for i = 1:70
    for j = 1:25
        curAngle = j * angle;
        netDist = 18 - scanData(i, j);
        coordX(i, j) = (netDist * sin(curAngle));
        coordY(i, j) = (netDist * cos(curAngle));
        coordZ(i, j) = (i * 0.179);
    end
end