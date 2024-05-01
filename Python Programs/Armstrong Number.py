#to find the armstrong number

n=int(input('Enter the number:'))
length=len(str(n))

temp=n
sum=0
while temp>0:
    rem=int(temp%10)
    temp=int(temp/10)
    sum=sum+ rem**length

if sum==n:
    print(f'{n} is an Armstrong Number')
else:
    print(f'{n} is not an Armstrong Number')