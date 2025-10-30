x=(input())
result=""
i=0
while i<len(x):
    digit=int(x[i])
    if i==0 and digit==9:
        result+=str(digit)
    else:
        result+=str(min(digit,9-digit))

    i+=1
print(result)