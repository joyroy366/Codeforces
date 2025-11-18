n=int(input())
value_a=0
value_b=0
for _ in range(n):
    a,b=map(int,input().split())
    if a > b:
       value_a+=1
    elif a==b:
        pass
    else:
       value_b+=1

if value_a > value_b:
    print("Mishka")

elif value_b > value_a:
    print("Chris")

else:
    print("Friendship is magic!^^")

