
for _ in range(int(input())):
    t = int(input())
    a = list(map(int,input().split()))
    value = 0
    for j in a:
        if a.count(j) == 1:
            value = j
            break
    for i in range(t):
        if a[i] == value:
          print(i+1)
          break