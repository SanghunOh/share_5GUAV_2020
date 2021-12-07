import socket

def connection(addr,port):
    recevier = socket.socket(family=socket.AF_INET,type = socket.SOCK_DGRAM)
    recevier.bind((addr, port))
    message_sendback(recevier, addr,port)

def message_sendback(receiver, addr, port):
    while True:
        bytepair = receiver.recvfrom(1024)

        if bytepair != None:
            message=bytepair[0]
            address = bytepair[1]

            print(message.decode('utf-8'),address)
            result = str(message)
            print(result)
            print(type(result))
            receiver.sendto(str.encode('OK'),address)


if __name__ == '__main__':
   try:
      connection('192.168.16.11' ,7778)     
      
   except Exception as e:
      print(e)
