t=int(input())
for _ in range(t):
    n=int(input())
    lst=list(map(int,input().rstrip().split()))

    count=0
    for i in lst:
        count+=i

    if count % 2 == 0:
        print("YES")
    else:
        print("NO")