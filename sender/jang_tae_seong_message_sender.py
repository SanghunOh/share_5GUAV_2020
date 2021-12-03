from socket import *

def recver():
    receiver = socket(family=AF_INET, type=SOCK_DGRAM)
    receiver.bind(("192.168.16.88", 7779))

    while True:
        bytepair = receiver.recvfrom(1024)

        message = bytepair[0]
        address = bytepair[1]

        # print(message, ', ',address)
        return f"{message}, {address}"

def snder():
    sender = socket(family=AF_INET, type=SOCK_DGRAM)
    sender.sendto( str.encode("Hello, I'm Sender"), ("192.168.16.16", 7778) )
    print(recver())

if __name__=="__main__":
    snder()