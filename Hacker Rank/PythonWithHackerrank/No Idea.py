import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	m = input().split()
	m = int(m[1])
	arr = list(map(int,input().split()))

	happiness = 0
	A = set(map(int,input().split()))
	B = set(map(int,input().split()))
	
	for i in arr:
		if(i in A):
			happiness += 1
		if(i in B):
			happiness -= 1

	print(happiness)