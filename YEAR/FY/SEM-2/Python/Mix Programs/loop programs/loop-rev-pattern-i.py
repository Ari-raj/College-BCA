n=int(input('enter n: '))
for i in range(n,0,-1):
    for j in range(i+1,1,-1):
        print(i,end='')
    print('\r')
    
'''
output : 1

enter n: 5

55555
4444
333
22
1

output : 2

enter n: 9

999999999
88888888
7777777
666666
55555
4444
333
22
1

'''
