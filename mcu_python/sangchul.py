import serial

def openOpencr():
    opencr = serial.Serial(port="/dev/ttyACM0", baudrate=115200, timeout=1)
    return opencr

def runSerial(opencr):
    while True:
        num= input("input num :")
        # opencr.write(bytes(num, 'utf-8'))
        opencr.write(bytes(num, 'ascii'))

if __name__ == '__main__':
   try:
      opencrIns = openOpencr()
      if opencrIns != None:
          runSerial(opencrIns)
   except Exception as e:
      print(e)

    
