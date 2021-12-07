import serial
import cv2 as cv

opencr = serial.Serial(port='/dev/ttyACM0', baudrate=115200, timeout=1)
cv.imshow("key board", cv.imread("/.key_board.jpg"))

try :
    while True:
        print("Enter a key: ")
        key = cv.waitKey(100)
        opencr.write(ord(key))

        if key == ord('q'):
            break
    cv.destroyAllWindows()
    
except Exception as e:
    print(f"{e}\n{type(e)}")
    