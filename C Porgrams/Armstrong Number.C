//checking if a number is Armstrong or not
#include<math.h>
#include<stdio.h>
void main()
{
	int n,sum=0,temp,count=0,rem=0;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;

	//counting the digits in the number
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	temp=n;
	while(temp>0)
	{
		rem=temp%10;
		temp=temp/10;
		sum=sum+pow(rem,count);
	}
	if(sum==n)
		printf("%d is an Armstrong Number\n",n);
	else
		printf("%d is not an Armstrong Number\n",n);
}