import serial


def connect(rate):
    global opencr
    opencr = serial.Serial(port='/dev/ttyACM0', baudrate = rate, timeout = 1)
    return

connect(115200)


if __name__ == '__main__':
   try:
        while True:
            direction = input('Enter a direction foreward(f), backward(b), right(r), left(l): ')
            if direction == 'q' :
                break
            elif direction != 'f' and 'b' and 'r' and 'l' :
                print("잘못된 방향입니다.")
                continue
            opencr.write(bytes(direction, 'utf-8'))
        pass
   except Exception as e:
        pass
