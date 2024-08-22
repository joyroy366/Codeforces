n,m=map(int,input().split())
a=max(n,m)
c=0
for i in range(1,a):
    if n-1==0:break
    if m-1==0:break
    c=c+1
print (c)
if c%2==0:
    print("Akshat")
else:
    print("Malvika")
