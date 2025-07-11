s= input()
lst = []
lst = list(map(int, s.split("+")))
for i in range(len(lst)):
    for j in range(len(lst)-1):
        if lst[j]>lst[j+1]:
            lst[j], lst[j+1] = lst[j+1], lst[j]
sentence =""
for digit in lst:
    sentence+= str(digit)+" "
sentence = sentence.strip()
sentence = sentence.replace(" ", "+")
print(sentence)