//swapping using pointers
#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
 }
 int main()
 {
	int m,n;
	printf("enter the two values:\n");
	scanf("%d %d",&m,&n);
	printf("Entered Values: %d %d\n",m,n);
	swap(&m,&n);
	printf("Values now: %d %d\n",m,n);
 }
