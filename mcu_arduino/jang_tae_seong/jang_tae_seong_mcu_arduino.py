import serial
import cv2 as cv

opencr = serial.Serial(port='/dev/ttyACM0', baudrate=115200, timeout=1)
cv.imshow("key board panel", cv.imread("key_board.jpg"))

while True:
    key = cv.waitKey(1)
    opencr.write(bytes(key,'utf-8'))