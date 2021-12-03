import socket

def callback(message, address):
    if message:
        receiver.sendto(str.encode("OK"), address)
    else:
        receiver.sentto(str.encode("Nothing"),address)
    print(message, ', ', address)
    return

def receive(receiver, callback):
    bytepair = receiver.recvfrom(1024)
    message = bytepair[0]
    address = bytepair[1]
    callback(message, address)    
    return
    
if __name__ == '__main__':
    try:
        receiver = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
        receiver.bind(("192.168.16.34",7778)) 
        while True:
            receive(receiver, callback)
    except:
        print("network error")

pass  