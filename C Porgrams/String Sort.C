//sorting the input string
#include<stdio.h>
#include<string.h>

void main()
{
	int i,j,len;
	char arr[20];//to take the input array
	char temp;
	printf("Enter the string:");
	scanf("%s",arr);
	printf("The String before alphabetical sorting: %s\n",arr);

	len=strlen(arr);//taking the string length
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The String after alphabetical sorting: %s\n",arr);

}