import serial
import cv2


img = cv2.imread('./mcu_python/kyung_jin.jpeg')


opencr = serial.Serial(port='/dev/ttyACM0',baudrate=9600,timeout=1)



while True:


    cv2.imshow('kyungjin', img)
    key = cv2.waitKey(1)
   
    if key == 27:
        break
    if key == ord('a'):
        opencr.write(bytes('a', 'utf-8'))
    if key == ord('b'):
        opencr.write(bytes('b', 'utf-8'))
    if key == ord('c'):
        opencr.write(bytes('c', 'utf-8'))
    if key == ord('d'):
        opencr.write(bytes('d', 'utf-8'))


cv2.destroyAllWindows()


