n=int(input())
x=list(map(int,input().split()))
current_lenghth=1
length=1
for i in range(1,n):
    if x[i]>=x[i-1]:
        current_lenghth += 1
    else:
        current_lenghth=1
    length=max(length,current_lenghth)
print(length)