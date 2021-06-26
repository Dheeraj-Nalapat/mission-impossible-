t=int(input())
while(t):
    n=int(input())
    sum1=0
    avg=0
    count=0
    a = list(map(int,input().split()))[:n]
    for i in range(n):
        sum1 =sum1 +a[i]
    avg=sum1/n
    for i in range(n):
        if(a[i]<avg):
            count +=1
    print(count) 
    t -=1
