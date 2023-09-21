port = 'COM3';
baudrate = 9600;

arduino = serial(port, 'baudrate', baudrate);
arduino.Timeout = 10;
fopen(arduino);

coordX = zeros(70, 25);
coordY = zeros(70, 25);
coordZ = zeros(70, 25);

for i = 1:60
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


ptCloud = pointCloud([coordX(:), coordY(:), coordZ(:)]);
pcshow(ptCloud);

