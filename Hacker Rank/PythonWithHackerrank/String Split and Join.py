import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def split_and_join(line):
    # write your code here
    # return line.replace(" ", "-")
    x=line.split(" ") 
    x='-'.join(x)    
    return x


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)