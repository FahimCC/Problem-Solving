import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	E = input()
	sE = set(map(int,input().strip().split(" ")))

	F = input()
	sF = set(map(int,input().strip().split(" ")))

	#s = sE.intersection(sF)
	s = sE & sF

	print(len(s))
