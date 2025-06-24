n = int(input())
rows = 1
prev = input()

for _ in range(n - 1):
    curr = input()
    if curr != prev:
        rows += 1
    prev = curr

print(rows)
