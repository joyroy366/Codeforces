y,w=map(int,input().split())
c=max(y,w)
c=6-c
c+=1
d=6
if c==6:
    c//=6
    d//=6
elif c==4:
    c//=2
    d//=2
elif c==3:
    c//=3
    d//=3
elif c==2:
    c//=2
    d//=2
print(f"{c}/{d}")

#sort card
import math

y, w = map(int, input().split())
c = 7 - max(y, w)
d = 6

g = math.gcd(c, d)
print(f"{c//g}/{d//g}")



