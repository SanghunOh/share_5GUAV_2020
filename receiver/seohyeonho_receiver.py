import socket 

def msgprint(message, addr):
    message = message.decode('euc-kr')
    print(message," , ",addr)
    return

def messagefunc(receive, f_callback):
    message = receive[0]
    address = receive[1]
    f_callback(message,address)
    return 

if __name__ == '__main__':
    receiver = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)
    receiver.bind(('192.168.16.19', 7778))
    
    while True :
        try:
            bytepair = receiver.recvfrom(1024)
            messagefunc(bytepair, msgprint)
            receiver.sendto(str.encode('ok'),('192.168.16.26', 7778))
            pass
        except Exception as e:
            print(e)  
            print("네트워크 접속 불량")
            pass

