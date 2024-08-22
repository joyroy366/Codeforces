n = map(int,input().split())
x=list(map(int,input().split()))
b=s=x[0]
count=0
for i in range( 1, n):
    if x[i] > b:
        count+=1
        b=x[i]
    elif x[i] < s:
        count+=1
        s=x[i]
print(count)




