def main():
    n = int(input())
    count =0
    while n>0:
        inp = input()
        x, y, z= inp.split(" ")
        x= int(x)
        y= int(y)
        z= int(z)
        sum = x+y+z
        if sum>=2:
            count+=1
        n-=1
    return count
print(main())