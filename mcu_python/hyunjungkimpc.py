import serial 

opencr = serial.Serial(port= '/dev/ttyACM0', baudrate= 115200, timeout=1)


while True:
    key = input("Enter a number : ")  
    opencr.write(bytes(key, 'utf-8'))
    x = opencr.readline()   
    
    def key_f(key):
        if key == 'f':
            key_01 = opencr.write(bytes(key, 'utf-8'))
            return ""

