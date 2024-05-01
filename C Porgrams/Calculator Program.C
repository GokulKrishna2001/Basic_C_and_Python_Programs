//calculator program
#include<stdio.h>
void main()
{
       int a,b;//the numbers
       int op;//inputing the operator
       int add,sub,mult;
       float div;
       //enter the numbers
       printf("Enter the 2 numbers:");
       scanf("%d%d",&a,&b);

       //listing the operations
       printf("The Operations available:\n");
       printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
       printf("Choose the operation:");
       scanf("%d",&op);

       //case statements
       while(op<5)
       {
	switch(op)
	{
		case 1:
		add=a+b;
		printf("Sum=%d\n",add);
		break;

		case 2:
		sub=a-b;
		printf("Difference=%d\n",sub);
		break;

		case 3:
		mult=a*b;
		printf("Product=%d\n",mult);
		break;

		case 4:
		div=a/b;
		printf("Quotient=%f\n",div);
		break;

		default:
		printf("Default\n");
		break;
	}
	printf("Input the choice again:");
	scanf("%d",&op);
       }
       printf("Done\n");
}