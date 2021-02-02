import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        line  = input().split(" ")
        name, scores = line[0],line[1:]
        scores = map(float, scores)
        student_marks[name] = scores

    query_name = input()
    query_score = student_marks[query_name]
    print("{0:.2f}".format(sum(query_score)/len(student_marks)))