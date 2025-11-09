t=int(input())

for _ in range(t):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort()
    count=a.count(k)

    print("YES" if count>=1 else"NO")


# max_value = max(a.count(x) for x in set(a))