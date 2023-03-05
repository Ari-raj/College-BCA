n=int(input('print n: '))
for i in range(0,n+1):
    for j in range(1,i+1):
        print(i,end='')
    print('\r')

'''

OUTPUT : 1

print n: 5

1
22
333
4444
55555

OUTPUT : 2

print n: 11

1
22
333
4444
55555
666666
7777777
88888888
999999999
10101010101010101010
1111111111111111111111

'''
