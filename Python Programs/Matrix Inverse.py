#matrix inverse
#pip install numpy

import numpy as np

rows=int(input("Enter the number of rows:"))
column=int(input("Enter the number of columns: "))

matrix1=[[int(input(f'Matrix 1[{i}][{j}]:')) for j in range(0,column)]for i in range(0,rows)]

#converting list to array
array1=np.array(matrix1)

print("The Matrix:")
print(array1)

#finding the determinant
determinant=round(np.linalg.det(array1))
print(f'Determinant: {determinant}')

#finding the inverse
if determinant!=0:

    #inverse of the matrix
    array_inv=np.linalg.inv(array1)
    
    #adjoint
    array_adj=array_inv*determinant
    
    #cofactor
    array_co=array_inv.T*determinant

    #minor with 2 decimal places
    array_min=[[0 for j in range(0,column)]for i in range(0,rows)]
    for i in range(0,rows):
        for j in range(0,column):
            if (i+j)%2!=0:#for odd positions
                array_min[i][j]=round(-array_co[i][j],2)
            else:#for even positions
                array_min[i][j]=round(array_co[i][j],2)
    
    print("Minor:")
    print(np.array(array_min))

    print("Cofactor:")
    print(array_co)

    print("Adjoint:")
    print(array_adj)

    print("Inverse:")
    print(array_inv)
else:
    print("Singular matrix")

print("Done")