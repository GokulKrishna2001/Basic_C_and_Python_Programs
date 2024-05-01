#calculator program

num1=int(input('Enter the first number:'))
num2=int(input('Enter the second number:'))

print('The operations are:')
print('1.Addition')
print('2.Saubtraction')
print('3.Multiplication')
print('4.Division')
print('5.Exit')

op=int(input('Enter the operator:'))
while op < 5:
    if op ==1:
        sum=num1+num2
        print(f'The Sum of the numbers is: {sum}')

    elif op==2:
        diff=num1-num2
        print(f'The Difference of the numbers is: {diff}')
    
    elif op==3:
        mult=num1*num2
        print(f'The Product of the numbers is: {mult}')
    
    elif op==4:
        div=float(num1/num2)
        print(f'The Quotient of the numbers is: {div}')
    
    op=int(input('Enter the choice again:'))

print('Done')
