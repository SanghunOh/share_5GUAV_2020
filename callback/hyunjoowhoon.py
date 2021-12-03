from pathlib import Path


def callback(length):
    print(length)
    return

def openFile(textfile, call_back):
    f = open(textfile, "r")
    length = len(f.read())
    f.close()
    call_back(length)
    return

if __name__ == '__main__':
    try:
        textfile = Path('./textfile.txt')
        textfile.touch(exist_ok=True)
        openFile(textfile, callback)
    except Exception as e:
        print(e, "  라는 오류가 있어요!!!")
        print(type(e))
        pass

pass