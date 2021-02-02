import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	K = int(input())
	rooms = input().split()
	# rooms.sort()
	# print((set(rooms[0::2]) ^ set(rooms[1::2]).pop())

	s1 = set()
	s2 = set()

	for i in rooms:
		if(i in s1):
			s2.add(i)
		else:
			s1.add(i)


	l = list(s1.difference(s2))
	print(l[0])