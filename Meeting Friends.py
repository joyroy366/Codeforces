x1,x2,x3=map(int,input().split())
m=abs(x1-x3)
m1=abs(x1-x2)
m2=abs(x2-x3)
x=max(m1,m)
x1=max(m2,x)
print(x1)