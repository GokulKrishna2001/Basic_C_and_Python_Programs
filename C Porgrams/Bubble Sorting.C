//bubble sorting
#include<stdio.h>
void main()
{
	int n;//total numbers
	int a[20];//array to enter the values
	int i,j,temp;//for loop

	//entering the number of values
	printf("Enter the number:");
	scanf("%d",&n);

	//enter the values
	printf("Enter the values:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	//printing the array
	printf("The Original Array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");

	//sorting
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	//printing the sorted array
	printf("The Sorted Array:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
}