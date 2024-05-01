//matrix multiplication
#include<stdio.h>
void main()
{
    int i,j,k, row1,row2,column1,column2;
    int A[10][10],B[10][10],C[10][10];

    //entering the row and column number of each
    printf("Enter the number of Rows and Columns of Matrix A:");
    scanf("%d%d",&row1,&column1);

    printf("Enter the number of Rows and Columns of Matrix B:");
    scanf("%d%d",&row2,&column2);

    if(column1!=row2)
    {
        printf("Enter the number of Rows and Columns of Matrix B again:");
        scanf("%d%d",&row2,&column2);
    }

    //input for matrix A
	for(i=0;i<row1;i++)
	{
		for(j=0;j<column1;j++)
		{
			printf("Enter A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	//input for matrix B
	for(i=0;i<row2;i++)
	{
		for(j=0;j<column2;j++)
		{
			printf("Enter B[%d][%d]:",i,j);
			scanf("%d",&B[i][j]);
		}
	}
    //for Matrix C: column1==row2
    //for Matrix C: rows1 x column2
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            C[i][j]=0;
            for(k=0;k<column1;k++)
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }

    //printing C
    printf("Product matrix:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)
        {
            printf("%d\t",C[i][j]);
        }
	printf("\n");
    }
    
}