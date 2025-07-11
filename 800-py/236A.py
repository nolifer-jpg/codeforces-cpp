s = input()
seen = ""
for char in s:
    if char not in seen:
        seen+=char

if len(seen)%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")