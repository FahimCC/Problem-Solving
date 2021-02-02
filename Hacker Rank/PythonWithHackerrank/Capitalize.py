import sys
import string
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

# Complete the solve function below.
def solve(s):
	return string.capwords(s,sep=' ')

   # def solve(s):
   # s = s.split(" ")
   # return(" ".join(i.capitalize() for i in s))

# def solve(s):
#     a = s.split()
#     st = ""
#     for i in a:
#         s = i
#         s = str(s)
#         s = s[0].upper() + s[1:]
#         st = st+s+" "
#     return st

if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)