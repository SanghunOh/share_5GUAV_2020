import socket

sender=socket.socket(family=socket.AF_INET,type=socket.SOCK_DGRAM)
sender.sendto(str.encode('Hello sender'),('192.168.16.34',7778))




###