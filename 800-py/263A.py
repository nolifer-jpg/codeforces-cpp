def main():
    matrix=[]
    for _ in range(5):
        rows = list(map(int, input().split()))
        matrix.append(rows)
    present_r =0
    present_c =0

    for row in range(len(matrix)):
        for col in range(len(matrix[row])):
            if matrix[row][col] == 1:
                present_r=row+1
                present_c=col+1
    
    if present_r!=3 and present_c!=3:
        return moves(present_r, present_c)
    else:
        return moves(present_r, present_c)

def moves(present_r, present_c):
    needed_r=3
    needed_c=3
    count=0
    while present_r!=3 or present_c!=3:
        if present_c>needed_c:
            present_c-=1
            count+=1
            #print(count)
        elif present_c<needed_c:
            present_c+=1
            count+=1
            #print(count)
        if present_r>needed_r:
            present_r-=1
            count+=1
            #print(count)
        elif present_r<needed_r:
            present_r+=1
            count+=1 
            #print(count)
    return count

print(main())