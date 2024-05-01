//calculating the employee payroll
#include<stdio.h>
 struct emp
 {
	int emp_no;
	char emp_name[20];
	int salary;
	int basic_pay;
	int allowance;
	int deduction;
 }e[20];

 void main()
 {
	int i;
	int n;//number of employees
	printf("Enter the number of employees:");
	scanf("%d",&n);

	//entering the individual employee details
	for(i=0;i<n;i++)
	{
		printf("Enter the Employer's Number:");
		scanf("%d",&e[i].emp_no);
		printf("Enter the Employer's Name:");
		scanf("%s",e[i].emp_name);
		printf("Enter the basic pay:");
		scanf("%d",&e[i].basic_pay);
		printf("Enter the allowance:");
		scanf("%d",&e[i].allowance);
		printf("Enter the deduction:");
		scanf("%d",&e[i].deduction);

		e[i].salary=e[i].basic_pay+e[i].allowance-e[i].deduction;
	}

	//printing the payroll
	for(i=0;i<n;i++)
	{
		printf("\n");
		printf("The Employer's Number:%d\n",e[i].emp_no);
		printf("The Employer's Name:%s\n",e[i].emp_name);
		printf("The Employer's Payroll:%d\n",e[i].salary);
	}
 }

