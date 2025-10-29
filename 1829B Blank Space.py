t =int(input())

for _ in range(t):
    n =int(input())
    a=list(map(int,input().split()))

    count1,count2=0 ,0
    for i in range(n):
        if a[i]==0:
            count1+=1
            count2=max(count2,count1)
        else:
            count1=0

    print(count2)
