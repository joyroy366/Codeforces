t=int(input())
abc_lst=['a','b','c']
for _ in range( t ):
    count=0
    user=input()
    for i in range(3):
      if user[i]==abc_lst[i]:
            count+=1
    if count>=1:
        print("YES")
    else:
        print("NO")