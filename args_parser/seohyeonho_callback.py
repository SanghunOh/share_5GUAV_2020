def func_callback(txt):
    print(txt)
    return

def func_call(path, func):
    f = open(path,'r')
    length = len(f.read())
    f.close()## 서현호
    func(length)
    return

if __name__ == '__main__':
    path = './testfile.txt'
    try:
        func_call(path, func_callback)
    except Exception as e:
            pass
