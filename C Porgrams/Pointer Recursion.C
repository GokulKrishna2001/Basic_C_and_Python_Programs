//recursion using pointers
//printing the decrement values of the entered number
#include<stdio.h>
void recur(int *a)
{
	printf("%d\t",*a);
	*a=*a-1;
	if(*a>=0)
	{
		recur(a);
	}
}

void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	recur(&n);
	printf("\n");
}