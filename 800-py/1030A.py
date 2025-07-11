n = int(input())
hard = 0
s = input()
s = s.replace(" ", "")
for digit in s:
    if digit =="1":
        hard +=1

if hard >=1:
    print("HARD")
else:
    print("EASY")