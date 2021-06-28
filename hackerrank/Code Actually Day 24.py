t=int(input())
match=0
while(t):
    x,y,z=input().split()
    if(int(x)+int(y)+int(z)>=2):
        match+=1
    t-=1    
print(match)  
