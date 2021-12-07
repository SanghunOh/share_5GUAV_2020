import serial
import cv2

opencr = serial.Serial(port='/dev/ttyACM0', baudrate=115200)
push_dict = {"f":1,"b":2,"r":3,"l":4,"q":5}
img = cv2.imread("../tanos.jpg")
while True:
    cv2.imshow('img', img)
    key = cv2.waitKey(10)
    if key==27:
        print("프로그램 종료")        
        break
    try:
        num = push_dict[chr(key)]
    except Exception as e:
        continue
    
    opencr.write(bytes(str(num), 'utf-8'))
cv2.destroyAllWindows()