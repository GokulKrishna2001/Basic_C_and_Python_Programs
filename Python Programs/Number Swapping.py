#swap two numbers
num1=int(input('Enter Number 1:'))
num2=int(input('Enter Number 2:'))
print(f'The Numbers before swapping are: {num1} and {num2}')
temp=num1
num1=num2
num2=temp
print(f'The Numbers after swapping are: {num1} and {num2}')