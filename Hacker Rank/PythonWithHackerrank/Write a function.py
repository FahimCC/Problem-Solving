import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def is_leap(year):
    leap = False
    
    # Write your logic here
    if (year%4==0) and (year%100!=0) or (year%400==0):
        leap = True

    return leap

year = int(input())
print (is_leap(year))