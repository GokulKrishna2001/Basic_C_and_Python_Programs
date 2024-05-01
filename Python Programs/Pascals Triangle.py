#pascal's triangle

rows=int(input('Enter the number of rows:'))


for i in range(1,rows+1):
    for space in range(1,rows+1-i):
        print(end=" ")
    
    value=1
    for j in range(1,i+1):
        print(f'{value}',end=' ')
        value=int(value*(i-j)/j)
    
    print()

