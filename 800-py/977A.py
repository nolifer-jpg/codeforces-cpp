s = input()
n, k= s.split(" ")
n=int(n)
k = int(k)

while k!=0:
    if n%10 ==0:
        n /=10
        k-=1
    else:
        n -=1
        k-=1

print(int(n))
