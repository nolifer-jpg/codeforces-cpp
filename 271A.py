n = int(input())
seen = ""
year = n+1
while len(seen)!= 4:
    temp=""
    for digit in str(year):
        if digit not in temp:
            temp+= digit
        else:
            year+=1
            continue
    seen = temp

    

print(int(seen))