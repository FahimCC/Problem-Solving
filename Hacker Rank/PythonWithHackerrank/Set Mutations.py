import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	n = input()
	A = set(map(int,input().split()))

	query = int(input())
	for _ in range(query):
		command = input().strip().split()
		if(command[0] == "intersection_update"):
			s =  set(map(int,input().split()))
			A.intersection_update(s)
		elif(command[0] == "update"):
			s =  set(map(int,input().split()))
			A.update(s)
		elif(command[0] == "symmetric_difference_update"):
			s =  set(map(int,input().split()))
			A.symmetric_difference_update(s)
		elif(command[0] == "difference_update"):
			s =  set(map(int,input().split()))
			A.difference_update(s)

	print(sum(A))
		


