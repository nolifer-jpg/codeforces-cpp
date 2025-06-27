n = int(input())

no_lucky_numbers = 0

for no in str(n):
    if int(no) == 4 or int(no)==7:
        no_lucky_numbers +=1

if no_lucky_numbers == 4 or no_lucky_numbers== 7:
    print("YES")
else:
    print("NO")