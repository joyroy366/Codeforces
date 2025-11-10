n,t=map(int,input().split())
a=list(map(int,input().split()))
count=0
left=0
max_book=0
for right in range(n):
        count+=a[right]

        while count>t:
            count-=a[left]
            left+=1

        max_book=max(max_book,right-left+1)

print(max_book)