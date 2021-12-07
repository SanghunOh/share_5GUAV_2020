import serial
import cv2 as cv

opencr = serial.Serial(port='/dev/ttyACM0', baudrate=115200, timeout=1)
cv.imshow("key board", cv.imread("./key_board.jpg"))

while True:
    print("Enter a key: ")
    key = cv.waitKey(0)
    opencr.write(key)

    if key == ord('q'):
        break
cv.destroyAllWindows()