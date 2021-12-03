import argparse


args = argparse.ArgumentParser()

args.add_argument('-first', '--first', required= True)
args.add_argument('-second', '--second', required=True)
args.add_argument('-third', '--third', required=True)

argvar = vars(args.parse_args())


def mul():
    return argvar['first'] * argvar['second']
    

def div():
    division = int(argvar['second']) / int(argvar['third'])
    return division

if __name__=='__main__':
    try:
        multi = mul()
        division = div()

    except ZeroDivisionError as e:
        print(e)
        
        pass
    except Exception as e:
        print(e)
        pass