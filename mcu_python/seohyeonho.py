import serial
import cv2


def connect(rate):
    global opencr
    opencr = serial.Serial(port='/dev/ttyACM1', baudrate = rate, timeout = 1)
    return

connect(115200)
cv2.namedWindow('order direction')

if __name__ == '__main__':
    while True:
    
        try:
            print('Enter a direction foreward(f), backward(b), right(r), left(l): ')
            direction = cv2.waitKey(1)
            # direction = input('Enter a direction foreward(f), backward(b), right(r), left(l): ')
            if direction == 'q' :
                break
            elif direction == 'f' or 'b' or 'r' or 'l' :
                opencr.write(direction.encode('ascii'))
            else:
                continue
            pass
        except Exception as e:
            pass
