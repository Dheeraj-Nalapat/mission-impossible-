l,r=input().split()
a=[]
for i in range(int(l),int(r)+1):
    if(i%2==1):
        a.append(i)
        
print(*a)
