S = input()
all_s= list(map(int, S.split(" ")))
all_s=set(all_s)
print(4-len(all_s))