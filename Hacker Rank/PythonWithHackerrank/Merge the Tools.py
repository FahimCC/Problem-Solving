from collections import OrderedDict 
import textwrap

import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def merge_the_tools(string, k):
    # your code goes here
    str = textwrap.wrap(string,k)
    for i in str:
    	print("".join(OrderedDict.fromkeys(i)) )



if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)