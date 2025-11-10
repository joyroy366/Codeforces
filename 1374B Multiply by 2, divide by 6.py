t = int(input())
for _ in range(t):
    n = int(input())
    steps = 0

    while True:
        if n == 1:
            print(steps)
            break
        elif n % 6 == 0:
            n//=6
            steps+=1
        else:
            n*=2
            steps+=1
        if n>10**9:
            print(-1)
            break
