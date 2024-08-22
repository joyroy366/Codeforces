a=list(map(int,input().split()))
a=sorted(a)
c=a[3]-a[0]
b=a[1]-c
a=a[0]-b
print(a,end=" ")
print(b,end=" ")
print(c)