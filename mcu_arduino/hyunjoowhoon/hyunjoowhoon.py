# Importing Libraries
import serial
import time
import cv2 as cv

panel = cv.imread('/home/ubuntu/develops/share_5GUAV_2020/mcu_arduino/hyunjoowhoon/Turtlebot3_logo.jpg', cv.IMREAD_COLOR)
cv.imshow('arduino control', panel)


opencr = serial.Serial(port='/dev/ttyACM0', baudrate=115200, timeout=1)




def key_push(key) : 

    while True:
        key = cv.waitKey(1)
        if key == 27 or key == ord('q'):
            # - key q : LED - wave Blink, Buzzer - ?, 5회 연속
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

        return key 




if __name__ == '__main__':
    

    try:
        pushed = input("알맞은 입력을 눌러주세요.( f / b / l / r, 취소: q 혹은 esc) :  ")
        opencr.write(bytes(pushed, 'utf-8'))
        value = opencr.readline()
        print('Result : ', value)
        
        print(key_push(pushed))

        cv.destroyAllWindows()

    except Exception as e: 
        print(e, "  라는 오류가 있어요!!!")
        print(type(e))