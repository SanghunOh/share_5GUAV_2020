import socket
sender = socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM)

def send_func(mes, ip, port):
    try: 
        senderto = sender.sendto(str.encode(mes),(ip,port))
        return senderto
    except OSError:
        pass


if __name__ == '__main__':
    try:
        mes_input = 'Hello'
        ipnum = '192.168.16.23'
        portnum = 7778
        send_func(mes_input, ipnum, portnum)
        pass
    except Exception as e:
        pass