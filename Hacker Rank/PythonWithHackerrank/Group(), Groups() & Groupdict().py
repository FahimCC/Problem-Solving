import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	import re
	result = re.search(r"(\w)\1+", input().strip())
	print(result.group(1) if result else -1)