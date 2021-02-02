import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def print_formatted(number):
    # your code goes here
    width = len("{0:b}".format(number))
    for i in range(1,number+1):
        print("{0:{w}d} {0:{w}o} {0:{w}X} {0:{w}b}".format(i,w = width))

# def print_formatted(number):
#     l=len(bin(number)[2:])
#     for i in range(1,number+1):
#         print(str(i).rjust(l)+' '+oct(i)[2:].rjust(l)+' '+hex(i)[2:].upper().rjust(l)+' '+bin(i)[2:].rjust(l))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)