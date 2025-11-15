from itertools import count

t=int(input())
for _ in range(t):
    s1="codeforces"
    s1_lst=list(s1)
    s=input()
    s_lst=list(s)
    count=0
    for i in range(len(s1)):
        if s1_lst[i]!=s_lst[i]:
            count+=1
    print(count)