s = input()

k, n, w= s.split(" ")
k = int(k)
n = int(n)
w = int(w)

total = 0

for i in range(1, w+1):
    total += i*k

if total-n<=0:
    print(0)
else:
    print(total-n) 