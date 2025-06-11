lb = input()
l, b = lb.split(" ")
l = int(l)
b = int(b)
years =0
while l<=b:
    b*=2
    l*=3
    years+=1

print(years)