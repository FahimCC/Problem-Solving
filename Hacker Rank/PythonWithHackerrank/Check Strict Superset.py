import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	s = set(map(int,input().split()))
	
	query = int(input())
	result = True
	for _ in range(query):
		n = set(map(int,input().split()))
		if(not(s.issuperset(n))):
			result = False
	
	print(result)