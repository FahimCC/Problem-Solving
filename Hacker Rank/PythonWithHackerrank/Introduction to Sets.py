import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def average(array):
    # your code goes here
    s = set(array) 
    return (sum(s) / len(s))

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)