import socket

def func_receiver(ip,port):
    recevier = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    recevier.bind((ip, port))
    func_message(recevier)


def func_message(recevier):
    while True:
        bytepair = recevier.recvfrom(1024)
        message = bytepair[0]
        address = bytepair[1]

        print(message, '.',address)

if __name__ == '__main__':
    func_receiver('192.168.16.14', 7777)

    try:
        pass

    except Exception as e: 
        print(e, "  라는 오류가 있어요!!!")
        print(type(e))