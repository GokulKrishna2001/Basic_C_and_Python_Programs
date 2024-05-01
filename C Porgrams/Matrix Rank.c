//rank of the matrix
//only for 2x2 and 3x3
#include<stdio.h>
int A[5][5];//initial matrix
int det=0;
int n;//matrix rows/columns

void determinant()
{
    if(n==2)
    {
        det=A[0][0]*A[1][1]-A[0][1]*A[1][0];
    }
    else if(n==3)
    {
        det=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2]);
        det=det-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2]);
        det=det+A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
    }
}

void rank()
{
    if(det!=0)
        printf("The Rank of the Matrix: %d\n",n);
    else
        printf("The Rank of the Matrix is LESS THAN %d\n",n);
}

void main()
{
    int i,j;
    printf("Enter the number of rows/columns:");
    scanf("%d",&n);

    printf("Enter the Matrix Elements:\n");
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}

    determinant();
    printf("The Determinant is: %d\n",det);
    rank();
}
