emp_list=[]

n=int(input("Enter the number of Employees:"))

#to enter the employee names
for i in range(0,n):
    print(f"Enter Employee {i+1} details:")
    name=input("Employee Name:")#0
    numb=int(input("Employee Number:"))#1
    basic_pay=int(input("Employee Basic Pay:"))#2
    allowance=int(input("Employee Allowance:"))#3
    deduction=int(input("Employee Deduction:"))#4

    salary=basic_pay+allowance-deduction#5

    emp_list.append([name,numb,basic_pay,allowance,deduction,salary])
    print()

#payroll
for i in range(0,n):
    print(f"Employee Name: {emp_list[i][0]}")
    print(f"Employee Number: {emp_list[i][1]}")
    print(f"Employee Salary: {emp_list[i][5]}")
    print()

print("Done")
