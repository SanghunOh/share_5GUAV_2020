import serial

opencr = serial.Serial(port="/dev/ttyACM0", baudrate=115200, timeout=1)

while True:
    num= input("input num :")
    # opencr.write(bytes(num, 'utf-8'))
    opencr.write(bytes(num, 'ascii'))
    # opencr.write( num )
    val = opencr.readline()
    print('Result :', val)
    
