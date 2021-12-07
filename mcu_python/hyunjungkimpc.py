import serial 

opencr = serial.Serial(port= '/dev/ttyACM0', baudrate= 115200, timeout=1)

while True:

    def func(key, y):
            if key == 'f':
                return y
            elif key == 'b':
                return y
            elif key == 'l':
                return y
            elif key == 'q':
                return y


    if __name__ == '__main__':
        try:
            key = input("Enter a number : ")  
            x = opencr.write(bytes(key, 'utf-8'))
            y = opencr.write(x)

        except Exception as e:
            pass


  

