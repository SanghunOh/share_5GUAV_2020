import socket

MY_IP = '192.168.16.19'
MY_PORT = 7778

def sender_func(msg, ip, port):
    sender = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    sender.sendto(str.encode(msg),(ip, port))
    receiver = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    receiver.bind((MY_IP, MY_PORT))

    bytepair = receiver.recvfrom(1024)

    message = bytepair[0]
    address = bytepair[1]

    print(message, ':현호PC ', address)
    return

if __name__ == '__main__':
    
    TARGET_IP = '192.168.16.26'
    TARGET_PORT = 7778
    while True:
        msg = input("# ")
        try:
            sender_func(msg, TARGET_IP, TARGET_PORT)            
        except Exception as e:
            pass


