port = 'COM3';
baudrate = 9600;

arduino = serial(port, 'baudrate', baudrate);
arduino.Timeout = 10;
fopen(arduino);

coordX = zeros(70, 25);
coordY = zeros(70, 25);
coordZ = zeros(70, 25);

for i = 1:70
    for j = 1:25
        recieved_data = fscanf(arduino, '%f');
        coordX(i, j) = recieved_data(1);
        coordY(i, j) = recieved_data(2);
        coordZ(i, j) = recieved_data(3);
    end
end

%disp(scanData);

fclose(arduino);
delete(arduino);


%{
angle = 14.4;

for i = 1:70
    for j = 1:25
        curAngle = deg2rad(j * angle);
        netDist = 18 - scanData(i, j);
        coordX(i, j) = (netDist * sin(curAngle));
        coordY(i, j) = (netDist * cos(curAngle));
        coordZ(i, j) = (i * 0.18);
    end
end


ptCloud = pointCloud([coordX(:), coordY(:), coordZ(:)]);
pcshow(ptCloud);
%}
