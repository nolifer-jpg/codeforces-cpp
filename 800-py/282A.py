import sys
input = sys.stdin.readline
n = int(input().strip())
x=0
while n>0:
    statement =input().strip()
    statement =statement.lower()
    if statement=="++x" or statement=="x++":
        x+=1
    elif statement=="--x" or statement=="x--":
        x-=1
    n-=1
print(x)