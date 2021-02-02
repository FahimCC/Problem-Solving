import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	T = int(input())

	for _ in range(T):
		n = int(input())
		l = list(input().split())
		a = set(l)
		l.clear()

		m = (input())
		l = list(input().split())
		b = set(l)

		print(a.issubset(b))
