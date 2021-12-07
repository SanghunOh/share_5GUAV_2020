import serial  

if __name__ == '__main__':
    ser = serial.Serial(port="/dev/ttyACM0", baudrate=115200, timeout=1)
    while True:
        op = input("문자 입력")
        ser.write(op.encode('utf-8'))
        if op == 'z':
            ser.close()
            break


