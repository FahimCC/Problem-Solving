#import calender
import datetime
import sys
sys.stdin = open("input.txt","r")
sys.stdout = open("output.txt","w")

if __name__ == "__main__":
	s = list(map(int,input().split()))
	x = datetime.datetime(s[2], s[0], s[1])

	#str = (calendar.day_name[calendar.weekday(n3,n1,n2)]).upper()
	str = x.strftime("%A").upper()
	print(str)