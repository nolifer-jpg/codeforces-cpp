s= input().strip()
new_s=""
for i in range(len(s)):
    if i == 0:
        new_s += s[i].capitalize()
    else:
        new_s +=s[i]

print(new_s)