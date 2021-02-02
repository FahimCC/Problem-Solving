import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	E = input()
	sE = set(map(int,input().split()))

	F = input()
	sF = set(map(int,input().split()))

	#s = sE.symmetric_difference(sF)
	#s = sE ^ sF

	print(len(sE ^ sF))