k,r=map(int,input().split())
c=1
for i in range(1,10):
    c=i*k
    d=c%10
    if d==r or d==0:
        print(i)
        break