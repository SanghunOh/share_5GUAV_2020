import serial
import cv2





opencr = serial.Serial(port='/dev/ttyACM0',baudrate=9600,timeout=1)


while True:



    
    num = input('Enter num : ')
    opencr.write(bytes(num, 'utf-8'))


