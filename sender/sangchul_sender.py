import socket

def connection(addr,port):
    sender = socket.socket(family=socket.AF_INET,type = socket.SOCK_DGRAM)
    message_sendback(sender, addr,port)

def message_sendback(sender, addr,port):
    sender.sendto(str.encode('Hello Sender'),(addr,port))  
    bytepair = sender.recvfrom(1024)
    message=bytepair[0]
    address = bytepair[1]

    print(message.decode('utf-8'),address)
    result = str(message)
    print(result)
    print(type(result))    


if __name__ == '__main__':
   try:
      connection('192.168.16.11' ,7778)     
      
   except Exception as e:
      print(e)
