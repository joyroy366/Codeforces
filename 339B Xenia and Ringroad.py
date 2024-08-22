n,m=map(int,input().split())
x=list(map(int,input().split()))
c=x[0]-1
for i in range(m-1):
    if x[i] < x[i+1]:
        d=x[i+1]-x[i]
        c=c+d
    elif x[i]==x[i+1]:
        c=c+0
    else:
        d=n-(x[i]-x[i+1])
        c=c+d
print(c)
