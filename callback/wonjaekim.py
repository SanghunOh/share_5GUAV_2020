def func_callback(input):
    print(input)
    return

def func_call(one, two, f_call):
    f_open=open(one,two)
    length=len(f_open.read())
    f_call(length)
    f_open.close
    return

if __name__ == '__main__':
   try:
      filename='./share_5GUAV_2020/callback/quest.txt'
      open_type='r'
      func_call(filename, open_type, func_callback)
      pass

   except Exception as e:
      pass
