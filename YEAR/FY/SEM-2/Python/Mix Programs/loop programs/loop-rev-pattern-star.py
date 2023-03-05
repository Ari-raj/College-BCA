n=int(input('enter n:'))
for i in range(n,0,-1):
    for j in range(i,0,-1):
        print('*',end='')
    print('\r')


'''
output : 1

enter n:10
**********
*********
********
*******
******
*****
****
***
**
*

output : 2

enter n:5
*****
****
***
**
*

'''
