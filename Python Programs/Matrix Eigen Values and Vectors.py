#to find the matrix eigen values and vectors
import numpy as np

row=int(input('Enter the number of rows of the Matrix:'))
column=int(input('Enter the number of columns of the Matrix:'))

print("Enter the Matrix elements:")
matrix1=[[int(input(f'Matrix 1[{i}][{j}]:')) for j in range(0,column)]for i in range(0,row)]

array1=np.array(matrix1)

value,vectors=np.linalg.eig(matrix1)

print("The Matrix:")
for elements in array1:
    print(elements)

print(f"The Eigen Values of the matrix: {value}")
print(f'The Eigen Vectors of the matrix:')
i=1
for elements in vectors:
    print(f'Vector {i}: {elements}')
    i=i+1
