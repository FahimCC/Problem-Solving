import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == '__main__':
	query = int(input())

	while(query):

		try:
			a = list(map(int,input().split()))
			print(int(a[0] // a[1]))
		except ZeroDivisionError as e:
			print("Error Code:",e)
		except ValueError as e:
			print("Error Code:",e)

		query -= 1
