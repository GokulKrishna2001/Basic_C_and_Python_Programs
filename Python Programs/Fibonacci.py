#to print the fibonacci series

n=int(input('Enter the number of elements:'))
n1=1
n2=1
print(f'The Fibonacci Series: {n1} {n2}', end=' ')

for i in range(2,n+1):
    n3=n1+n2
    print(f'{n3}', end=' ')
    n1=n2
    n2=n3

print()