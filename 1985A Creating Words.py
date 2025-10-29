
t=int(input())
i=1
while i<=t:
    a,b=input().split()
    print(b[0]+a[1:],a[0]+b[1:])
    i+=1