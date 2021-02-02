import re
import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	query = int(input()) 

	for _ in range(query):
		pattern = input()
		isCorrect = True
		
		try:
			re.compile(pattern)
		except re.error:
			isCorrect = False

		print(isCorrect)
