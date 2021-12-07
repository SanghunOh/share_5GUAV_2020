# Importing Libraries
import serial
import time
import cv2 as cv
def open_cr(key):
    opencr.write(bytes(key, 'utf-8'))
    value = opencr.readline()
    time.sleep(0.5)

def key_push() : 
    
    panel = cv.imread('mcu_arduino/hyunjoowhoon/Turtlebot3_logo.jpg')
    
    cv.imshow('arduino control', panel)

    while True:
        key = cv.waitKey(1)
        if key == 27 or key == ord('q'):
            # - key q : LED - wave Blink, Buzzer - ?, 5회 연속
            open_cr(key)
            break

        elif key == ord('f'):
            # - key f : LED - 22, 23 Blink, Buzzer - ?, 1회 연속
            continue

        elif key == ord('b'):
            # - key b : LED - 24, 25 Blink, Buzzer - ?, 2회 연속
            continue

        elif key == ord('t'):
            # - key r : LED - 22, 25 Blink, Buzzer - ?, 3회 연속
            continue

        elif key == ord('l'):
            # - key l : LED - 23, 24 Blink, Buzzer - ?, 4회 연속
            continue

        open_cr(key)
        
        return 




if __name__ == '__main__':

    

    opencr = serial.Serial(port='/dev/ttyACM1', baudrate=115200, timeout=1)

    try:
        key_push()

        # pushed = input("알맞은 입력을 눌러주세요.( f / b / l / r, 취소: q 혹은 esc) :  ")
        cv.destroyAllWindows()

    except Exception as e: 
        print(e, "  라는 오류가 있어요!!!")
        print(type(e))