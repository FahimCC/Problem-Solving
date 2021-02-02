import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == '__main__':
    n = int(input())
    l = map(int,input().split())

    l = list(dict.fromkeys(l))
    l.sort()
    print(l[-2])
