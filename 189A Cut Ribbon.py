
n,a,b,c=map(int,input().split())
m={a,b,c}
m=sorted(m)
for i in range(2):
    if n>=m[i]:
        n=n-m[i]
        i+=1

print(i)
