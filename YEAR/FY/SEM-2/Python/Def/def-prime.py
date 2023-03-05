def pr(n):
    for i in range(2,n):
        if n%2 == 0:
            print('it is not a prime number')
           
        elif n == 2:
            print('prime number')
           
        else:
            print('prime')
            break;
n=int(input('enter to check:'))
pr(n)


'''
output:1

enter to check:7
prime'''
