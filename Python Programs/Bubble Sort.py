#bubble sort

list1=[]
n=int(input('Enter the number of numbers to sort:'))

print('Enter the numbers:')
for i in range(0,n):
    inp=int(input())
    list1.append(inp)

print(f'{list1} is the input list')

for i in range(0,n-1):
    for j in range(0,n-1-i):
        if list1[j] > list1[j+1]:
            temp=list1[j]
            list1[j]=list1[j+1]
            list1[j+1]=temp

print(f'{list1} is the sorted list')