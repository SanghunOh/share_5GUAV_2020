import socket

if __name__ == '__main__':
    sender = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    sender.bind(('192.168.16.26', 7778))
    while True:
        msg = "안녕하세요 바람이 적당히 시원해 기분이 너무 좋아요"
        sender.sendto(str.encode(msg),('192.168.16.19', 7778))
        check_msg = sender.recvfrom(1024)
        print(check_msg[0])