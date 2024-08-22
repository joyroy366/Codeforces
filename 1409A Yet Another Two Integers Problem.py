n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    if a==b:
        print(0)
    else:
        m,n=max(a,b),min(a,b)
        diff=m-n
        inc=(diff+9)//10
        print(inc)



