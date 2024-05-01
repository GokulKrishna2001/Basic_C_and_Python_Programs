#recursion

def recur(n):
    print(n,end=' ')
    n=n-1
    if n>0:
        recur(n)

num=int(input('Enter the maximum number:'))
print('The Number List:',end=' ')
recur(num)