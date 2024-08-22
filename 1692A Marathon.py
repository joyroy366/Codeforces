n=int(input())

for i in range(n):
    e=0
    a,b,c,d = map(int, input().split())
    if a<b :
        e=e+1
    if a<c :
        e=e+1
    if a<d :
        e=e+1

    else:
         e=e


    print(e)

