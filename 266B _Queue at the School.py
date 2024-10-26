n, m = map(int, input().split())
x = list(input().strip())

for _ in range(m):
    i = 0
    while i < n - 1:
        if x[i] == "B" and x[i + 1] == "G":
            x[i], x[i + 1] = x[i + 1], x[i]
            i += 1
        i += 1

print("".join(x))
