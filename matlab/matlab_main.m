port = 'COM3';
baudrate = 9600;
cmd = 'n';

arduino = serialport(port, baudrate);
fopen(arduino);

scanData = zeros(70, 40, 'int16');

cmd = input('Enter command: ', 's');

while cmd ~= 'x'
    if cmd == 'y'
        write(arduino, 3, "int16");
        flush(arduino);
        for i = 1:5
            %while arduino.NumBytesAvailable < 80; end
            recieved_data = read(arduino, 40, 'int16');
            scanData(i, :) = recieved_data;
        end
        cmd = 'n';
        disp(scanData);
    end
    cmd = input('Enter command: ', 's');
end

fclose(arduino);
delete(arduino)