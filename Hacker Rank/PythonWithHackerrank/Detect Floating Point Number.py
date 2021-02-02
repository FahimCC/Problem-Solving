import re
import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	query = int(input())

	content = re.compile(r'^[\d\+-]*.\d+$')
	for _ in range(query):
		string = input()
		result = re.search(content, string)
		#print(result)
		try:
			number = float(string)
		except:
			result = None
			
		if(result == None):
			print("False")
		else:
			print("True")

