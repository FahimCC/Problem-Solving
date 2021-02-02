import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def myFunc(e):
  return e[score]

if __name__ == '__main__':
    l = list()
    n = int(input())
    for _ in range(n):
        name = input()
        score = float(input())
        l.append([name,score])

    score = lambda x:x[1]
    l.sort(key=score)

    search = l[0][1]
    for i in l:
    	if(i[1] != search):
    		search = i[1]
    		break

    L = list()
    for i in l:
    	if(i[1] == search):
    		L.append(i[0])
    
    L.sort()
    for i in L:
    	print(i)

    