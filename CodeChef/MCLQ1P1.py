y=list(map(int,input().split()))
i = int(input()) 
n = len(y)
x = y.count(1)
li = []
count = 0
for j in y:
    if count % 2 == 0:
        li.append(j)
    count += 1
z=li.count(1)
if((n%2)==0):
    m = n/2
    
else:
    if(z==0):
       m = (n+1)/2
    else :
       m = (n-1)/2
s=m-x
if(s<i):
    print(0)

else :
    print(1)
