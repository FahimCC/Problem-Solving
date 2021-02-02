import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	n = int(input())
	s = set()
	for _ in range(n):
		string = input().strip()
		s.add(string)

	print(len(s))