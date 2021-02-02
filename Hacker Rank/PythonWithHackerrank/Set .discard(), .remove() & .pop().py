import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	n = int(input())
	s = set(map(int, input().split()))
	query = int(input())

	for _ in range(query):
		command = input().strip().split(" ")
		if(command[0] == "pop"):
			s.pop()
		elif(command[0] == "remove"):
			s.remove(int(command[1]))
		elif(command[0] == "discard"):
			s.discard(int(command[1]))

	print(sum(s))
