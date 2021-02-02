import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

def mutate_string(string, position, character):
    x = list(string)
    x[position] = character
    return "".join(x)

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)