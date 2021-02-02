import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def swap_case(s):
    return s.swapcase()

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)