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
    elif key=='102': #f
        num
    elif key=='98': #f
    elif key=='114': #f
    elif key=='108': #f
    elif key=='113': #f
    
    # num = push_dict[key]
    
    print(ord('f'),ord('b'),ord('r'),ord('l'),ord('q'))
    # opencr.write(bytes(str(num), 'utf-8'))
cv2.destroyAllWindows()