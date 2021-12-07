import serial 

opencr = serial.Serial(port= '/dev/ttyACM0', baudrate= 115200, timeout=1)


while True:
    key = input("Enter a number : ")  
    x = opencr.write(bytes(key, 'utf-8'))
    y = opencr.write(x)
        

    def key_f(key, x):
        if key == 'f':
            return x
        elif key == ''
        

            

  

