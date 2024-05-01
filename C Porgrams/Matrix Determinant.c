//to find the determinant of a matrix
//only for 2x2 and 3x3 matrix

float A[5][5];//initial matrix
float B[5][5];//final matrix
float det=0;
int n;//matrix rows/columns

void printfn(float result[5][5])
{
    int i,j;
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{
			printf("%0.1f\t",result[i][j]);
		}
		printf("\n");
	}
}

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

void minor()
{
    if(n==2)
    {
        B[0][0]=A[1][1];
        B[0][1]=A[1][0];
        B[1][0]=A[0][1];
        B[1][1]=A[0][0];
    }
    else if(n==3)
    {
        B[0][0]=A[1][1]*A[2][2]-A[1][2]*A[2][1];
        B[0][1]=A[1][0]*A[2][2]-A[1][2]*A[2][0];
        B[0][2]=A[1][0]*A[2][1]-A[1][1]*A[2][0];

        B[1][0]=A[0][1]*A[2][2]-A[0][2]*A[2][1];
        B[1][1]=A[0][0]*A[2][2]-A[0][2]*A[2][0];
        B[1][2]=A[0][0]*A[2][1]-A[0][1]*A[2][0];

        B[2][0]=A[0][1]*A[1][2]-A[1][1]*A[0][2];
        B[2][1]=A[0][0]*A[1][2]-A[1][0]*A[0][2];
        B[2][2]=A[0][0]*A[1][1]-A[0][1]*A[1][0];
    }

}

void cofactor()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)%2!=0)
                B[i][j]=-(B[i][j]);
        }
    }
}

void adjoint()
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp=B[i][j];
            B[i][j]=B[j][i];
            B[j][i]=temp;
        }
    }
}

void inverse()
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            B[i][j]=B[i][j]/det;
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
			scanf("%f",&A[i][j]);
		}
	}

    //to print the current matrix
    printf("The Current Matrix:\n");
    printfn(A);

    //to find the determinant
    determinant();
    printf("Determinant of the matrix: %0.1f\n",det);

    //to find the minor
    minor();
    printf("Minor:\n");
    printfn(B);

    //to find the cofactor
    cofactor();
    printf("Cofactor:\n");
    printfn(B);

    //to find the adjoint 
    adjoint();
    printf("Adjoint:\n");
    printfn(B);

    //to find the inverse
    inverse();
    printf("Inverse:\n");
    printfn(B);
}