def factors(x,a=[]):
   for i in range(1, x + 1):
       if x % i == 0:
           a.append(i)
           
N=int(input())
b=[]
factors(N,b)
print(len(b))
print(*b)
