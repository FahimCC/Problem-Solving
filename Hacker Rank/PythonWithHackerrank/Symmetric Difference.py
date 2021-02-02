import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	A = input()
	a = set(map(int,input().strip().split(" ")))

	B = input()
	b = set(map(int,input().strip().split(" ")))

	s = set()
	s.update(a - b)
	s.update(b - a)
	s = sorted(s)

	for i in s:
		print(i)