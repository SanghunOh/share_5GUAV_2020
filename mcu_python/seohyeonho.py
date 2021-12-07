import serial

opencr = serial.Serial(port='/dev/ttyACM0', baudrate =115200, timeout = 1)

while True:
    direction = input('Enter a direction foreward(f), backward(b), right(r), left(l): ')
    if direction == 'q' :
        break
    opencr.write(bytes(direction, 'utf-8'))