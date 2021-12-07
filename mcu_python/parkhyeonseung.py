import serial
import cv2

opencr = serial.Serial(port='/dev/ttyACM0',baudrate= 115200, timeout= 1)
number = 1
cv2.namedWindow('a')
while True:
    key = cv2.waitKey(1)
    if key == ord("f"):
        number = str.encode('f')
    if key == ord("b"):
        number = str.encode('b')
    if key == ord("l"):
        number = str.encode('l')
    if key == ord("r"):
        number = str.encode('r')
    if key == ord('q'):
        break
    opencr.write(number)