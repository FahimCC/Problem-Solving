import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	name = input("Enter your name: ")
	print("My name is ",name)