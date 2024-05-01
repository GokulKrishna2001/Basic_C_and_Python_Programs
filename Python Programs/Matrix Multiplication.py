#matrix multiplication

row1=int(input("Enter the number of rows for Matrix 1:"))
column1=int(input("Enter the number of columns for Matrix 1:"))

row2=int(input("Enter the number of rows for Matrix 2:"))
column2=int(input("Enter the number of columns for Matrix 2:"))
print()

if column1 !=row2:
    print("Column of Matrix 1 is not equal to Row of Matrix 2")
    row2=int(input("Enter the number of rows for Matrix 2 again:"))
    column2=int(input("Enter the number of columns for Matrix 2 again:"))

#entering the values for matrix 1 and 2
print('Enter the values:')
matrix1=[[int(input(f'Matrix 1[{i}][{j}]: ')) for j in range(0,column1)]for i in range(0,row1)]
matrix2=[[int(input(f'Matrix 2[{i}][{j}]: ')) for j in range(0,column2)]for i in range(0,row2)]

#for matrix 3: column1==row2
#for matrix 3: row1xcolumn1

matrix3=[[0 for j in range(0,column2)]for i in range(0,row1)]
for i in range(0,row1):
    for j in range(0,column2):
        for k in range(0,column1):
            matrix3[i][j]=matrix3[i][j] + matrix1[i][k] * matrix2[k][j]

#printing
print(f"The product of the Matrix 3({row1}x{column2}) is:")

for element in matrix3:
    print(element)