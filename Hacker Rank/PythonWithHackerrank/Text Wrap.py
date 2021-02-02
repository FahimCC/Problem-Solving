import sys
import textwrap

sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def wrap(string,max_width):
	return textwrap.fill(string,max_width)
	#return "\n".join([string[i:i+max_width] for i in range(0, len(string), max_width)])
	
if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
