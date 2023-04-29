port = 'COM3';
baudrate = 9600;

arduino = serialport(port, baudrate);
fopen(arduino);

scanData = zeros(70, 40, 'int16');