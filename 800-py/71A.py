def main():
    while True:
        try:
            s= input()
        except EOFError:
            break
        else:
            if not s.isdigit():
                print(abbreviation(s))
            else:
                print(end="")

def abbreviation(s):
    if len(s)>10:
         return s[0]+str((len(s)-2))+s[len(s)-1]
    else:
        return s
    
        
main()