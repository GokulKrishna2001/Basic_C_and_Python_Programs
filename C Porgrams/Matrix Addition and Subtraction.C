//matrix addition and subtraction

#include<stdio.h>
void main()
{
	int rows,columns,i,j,choice;
	int A[10][10],B[10][10],C[10][10],D[10][10];
	//input the rows and columns
	printf("Enter the no of rows and columns:");
	scanf("%d%d",&rows,&columns);
	//input for matrix A
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("Enter A[%d][%d]:",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	//input for matrix B
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("Enter B[%d][%d]:",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	//input the choice
	printf("Operations:\n1.Addition\t2.Subtraction\n3.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);

	//switch statement
	while(choice<=2)
	{
		switch(choice)
		{
			case 1://addition
			for(i=0;i<rows;i++)
			{
				for(j=0;j<columns;j++)
				{
					C[i][j]=A[i][j]+B[i][j];
				}
			}
			//printing the matrix
			printf("Sum:\n");
			for(i=0;i<rows;i++)
			{
				for(j=0;j<columns;j++)
				{
					printf("%d\t",C[i][j]);
				}
				printf("\n");
			}
			break;

			case 2://subtraction
			for(i=0;i<rows;i++)
			{
				for(j=0;j<columns;j++)
				{
					D[i][j]=A[i][j]-B[i][j];
				}
			}	
			//printing the matrix
			printf("Difference:\n");
			for(i=0;i<rows;i++)
			{
				for(j=0;j<columns;j++)
				{
					printf("%d\t",D[i][j]);
				}
				printf("\n");
			}

			break;
		}
		printf("Enter your choice again:");
		scanf("%d",&choice);
	}
}