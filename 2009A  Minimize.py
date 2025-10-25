n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    c=1
    for c in range(b):
        if(a<=c) or (c<=b):
            z=(c-a)+(b-c)
            print(z)
            break

