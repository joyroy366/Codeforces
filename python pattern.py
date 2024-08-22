import calendar
yy=int(input("** Enter the Year:"))
print(calendar.calendar(yy))
mm=int(input("** Enter the monthe:"))
print(calendar.month(yy,mm))

print("** Print sum of n number : **")
n=int(input("Enter the number:"))
sum=0
for i in range(1,n+1):
    sum=sum+i
print(sum)

print("Enter the int number :")
n=int(input())
for i in range(n+1):
    print((n-i)*" ",end=" ")
    print(i*"*")

print("new n int number :")

n=int(input())
for i in range(n+1):
    print(i*"*")

