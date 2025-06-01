n = int(input())
free=0
for _ in range(n):
    s = input()
    p, q= s.split(" ")
    p = int(p)
    q = int(q)
    if q-p>=2:
        free+=1

print(free)
    