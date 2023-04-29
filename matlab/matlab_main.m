port = 'COM3';
baudrate = 9600;

arduino = serialport(port, baudrate);
% fopen(arduino);

scanData = zeros(70, 40, 'int16');

for i = 1:70

    while s.BytesAvailable < 80
    end
    recieved_data = read(arduino, 40, 'int16');

end