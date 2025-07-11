nk = input()
n, k = nk.split(" ")
n = int(n)
k = int(k)
nums=[]
int_nums=[]
count =0

temp = input()
nums = temp.split(" ")
if len(nums)==n:
    for i in range(len(nums)):
        int_nums.append(int(nums[i]))
    for num in int_nums:
        if num>=int_nums[k-1] and num!=0:
            count+=1
    print(count)