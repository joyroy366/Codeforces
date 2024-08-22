n,k=map(int,input().split())
a=240-k
b=0
c=0
for i in range(n):
    b=(i+1)*5
    if(a>=b):
        c+=1
        a=a-b
        b=0
print(c)