import sys 
sys.stdin = open('input.txt', 'r')   
sys.stdout = open('output.txt', 'w') 

if __name__ = "__main__":
	
	n =int(input());

	if (n&1) or not(n&1) and (n>=6) and (n<=20):
		print("Weird")
	elif not(n&1) and (n>=2) and (n<=5) or (n>20):
		print("Not Weird")

	print("\n")