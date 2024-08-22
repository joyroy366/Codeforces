
mat=[list(map(int,input().split())) for _ in range(5)]
for i in range(5):
    for j in range(5):
        if mat[i][j]==1:
            r=i+1
            c=j+1
print(abs(r-3)+abs(c-3))


