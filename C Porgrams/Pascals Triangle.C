//pascals triangle
#include<stdio.h>
void main()
{
	//space for the position of 1
	//value for the triangle's individual value
	int rows,i,j,space,value;

	//taking the input rows
	printf("Enter the number of rows:");
	scanf("%d",&rows);

	//forming the triangle
	for(i=1;i<=rows;i++)
	{
		//for creating the space for the 1st 1 in each row
		for(space=1;space<=rows-i;space++)
			printf("\t");

		value=1;
		//for the traingle values
		for(j=1;j<=i;j++)
		{
			printf("%d\t\t",value);
			//to calculate the sum of the adjacent values above
			value=value*(i-j)/j;
		}
		printf("\n");
	}
}
