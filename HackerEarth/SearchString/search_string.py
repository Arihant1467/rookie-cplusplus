n = int(input(""))
for i in range(n):
    (r,c)=input("").split(" ")
    r=int(r)
    c=int(c)
    alphabet=list()
    for row in range(r):
        alphabet.append(list())
        s=input("")
        for c in s:
            alphabet[row].append(c)
    searchString=input("")
    searched =[False]*len(searchString)
    comparator=[True]*len(searchString)
    i=0
    for c in searchString:
        print(c)
        for row in range(r):
            if c in alphabet[row]:
                try:
                    aplhabet[row].remove(c)
                except:
                    pass
                searched[i]=True
                ++i
                print("search",searched,end="\n") 
                break
    print(comparator,searched)
    if searched == comparator:
        print("Yes",end="\n")
    else:
        print("No",end="\n")
