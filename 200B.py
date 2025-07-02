n= int(input())
s = input()
lst =list(map(int, s.split(" ")))
sum =0
for digit in lst:
    sum += digit

value = sum/n
print(f"{value:.14f}")