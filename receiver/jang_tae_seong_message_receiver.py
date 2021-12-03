from socket import *

def recver():
    receiver = socket(family=AF_INET, type=SOCK_DGRAM)
    receiver.bind(("192.168.16.16", 7778))

    while True:
        bytepair = receiver.recvfrom(1024)

        message = bytepair[0]
        address = bytepair[1]

        print(message, ', ',address)
        return message, address

def snder(address):
    sender = socket(family=AF_INET, type=SOCK_DGRAM)
    if address[0]:
        sender.sendto( str.encode("Hello Sender, I receive your message."), (address[0], 7779) )
    else:
        sender.sendto( str.encode("Hello Sender, I receive your message."), ("192.168.16.88", 7778) )

def callbk(retmsg):
    message , address = retmsg
    if message:
        snder(address)
        print("Callback message is sended!!!")
    else:
        pass

if __name__=="__main__":
    callbk(recver())