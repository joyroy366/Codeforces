t=int(input())
a=[]
c=0
for i in range(t):
    x=int(input())
    a=list(map(int,input().split()))
    a=sorted(a)
    for j in range(x):
        c=a[j]-a[j-1]
        if c>1:
            c=c
            break
    if c<=1:
        print("YES")
    else:
        print("NO")

