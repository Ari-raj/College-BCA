n=int(input('enter n: '))
for i in range(0,n+1):
    for j in range(1,i+1):
        print(j,end='')
    print('\r')
'''
OUTPUT : 1

enter n: 5

1
12
123
1234
12345

OUTPUT : 2

enter n: 10

1
12
123
1234
12345
123456
1234567
12345678
123456789
12345678910

'''
