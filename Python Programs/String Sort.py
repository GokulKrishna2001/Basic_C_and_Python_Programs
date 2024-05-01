#string sort

str=input('Enter String:')
list1=list(str)
print(f'The String before sort is {str}')

for i in range(0,len(str)-1):
    for j in range(0,len(str)-i-1):
        if list1[j]>list1[j+1]:
            temp=list1[j]
            list1[j]=list1[j+1]
            list1[j+1]=temp

str1=""
for i in list1:
    str1=str1+i

print(f'The String after sorting is {str1}')
