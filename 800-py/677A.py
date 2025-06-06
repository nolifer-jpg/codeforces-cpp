nh = input()
n, h = nh.split(" ")
h = int(h)

temp = input()
h_friends = list(map(int, temp.split(" ")))

width =0
for digit in h_friends:
    if digit>h:
        width+=2
    else:
        width+=1

print(width)
    