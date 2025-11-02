a=int(input("Enter a digit:"))
sum=0
while a>0:
    rem=a%10
    sum=sum+rem
    a=a//10
print("Sum of digits is:",sum)
    