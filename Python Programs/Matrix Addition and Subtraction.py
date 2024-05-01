#matrix addition and subtraction
rows=int(input('Enter the number of rows:'))
columns=int(input('Enter the number or columns:'))

print('Enter the values:')
matrix1=[[int(input(f'Matrix 1[{i}][{j}]: ')) for j in range(0,columns)]for i in range(0,rows)]
matrix2=[[int(input(f'Matrix 2[{i}][{j}]: ')) for j in range(0,columns)]for i in range(0,rows)]

print('Matrix 1:')
for element in matrix1:
    print(element)

print('Matrix 2:')
for element in matrix2:
    print(element)

print('Operations:')
print('1.Addition')
print('2.Subtraction')
print('3.Exit')
op=int(input('Enter the choice:'))

while op<3:
    if op == 1:#addition
        sum=[[0 for j in range(0,columns)]for i in range(0,rows)]
        for i in range(0,rows):
            for j in range(0,columns):
                sum[i][j]=matrix1[i][j]+matrix2[i][j]
        
        print('The Sum of the matrics:')
        for element in sum:
            print(element)
    elif op==2:#subtraction
        diff=[[0 for j in range(0,columns)]for i in range(0,rows)]
        for i in range(0,rows):
            for j in range(0,columns):
                diff[i][j]=matrix1[i][j]-matrix2[i][j]
        
        print("The Difference between the matrices:")
        for element in diff:
            print(element)

    op=int(input('Enter the choice again:'))

print('Done')
