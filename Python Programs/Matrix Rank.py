#finding the rank of the matrix
import numpy as np

row=int(input('Enter the number of rows of the Matrix:'))
column=int(input('Enter the number of columns of the Matrix:'))

print("Enter the Matrix elements:")
matrix1=[[int(input(f'Matrix 1[{i}][{j}]:')) for j in range(0,column)]for i in range(0,row)]

array1=np.array(matrix1)

rank=np.linalg.matrix_rank(array1)

print("The Matrix:")
for elements in array1:
    print(elements)

print(f"The Rank of the Matrix: {rank}")