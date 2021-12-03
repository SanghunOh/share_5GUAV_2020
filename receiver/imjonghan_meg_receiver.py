import socket
def send_func(address):
    sender = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    sender.sendto(str.encode('message complete'),(address[0], 7778))    

def server_func(ip, port, func=send_func):
    receiver = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    receiver.bind((ip, port))

    while True:
        bytepair = receiver.recvfrom(1024)

        message = bytepair[0]
        address = bytepair[1]

        print(message, ':현호PC ', address)
        func(address)
    return

if __name__ == '__main__':
    IP_SERVER = '192.168.16.26'
    PORT_SERVER = 7778
    try:
        server_func(IP_SERVER, PORT_SERVER)
    except Exception as e:
        print(e)
        print("연결이 끊겼습니다")
