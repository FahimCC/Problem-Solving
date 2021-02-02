import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

#from __future__ import print_function

N = int(input())
for i in range(1, N+1):
    print(i, end="")

#print(*range(1, int(input())+1), sep='')