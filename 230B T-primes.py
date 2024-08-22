n=map(int,input().split())
x=list(map(int,input().split()))
count=0
for i in range(n):
    for j in range(x[i]):
        if x[i]%i==0:
           count+=1

    if count>3:
        print("NO")
    else:
        print("YES")