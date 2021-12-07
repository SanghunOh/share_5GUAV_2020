import socket
recevier = socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM)
def func(ip,port): 
    try: 
        recevier.bind((ip, port))
        bytepair = recevier.recvfrom(1024)
        message = bytepair[1]
        address = bytepair[1]
        return 


    except OSError:
        pass



if __name__ == '__main__':
    try:
        ipnum = '192.168.16.23'
        portnum = 7778
        func(ipnum, portnum)


        pass
    except Exception as e:
        pass