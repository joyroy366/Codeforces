
n=int(input())
b=list(map(int,input().split()))
s=0
d=0
for i in range(len(b)):
    big=b[0] if b[0]>b[-1] else b[-1]
    b.remove(big)
    if i %2==0:
        s=s+big
    else:
        d=d+big

print(s)
print(d)

