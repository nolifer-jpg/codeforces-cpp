n = int(input())
In = 0
Out = 0
remaining = 0
seatneeded=[]
for i in range(n):
    io =input()
    Out, In = io.split(" ")
    Out = int(Out)
    In = int(In)
    remaining += In-Out
    seatneeded.append(remaining) 
    #print(remaining)

print(max(seatneeded))

