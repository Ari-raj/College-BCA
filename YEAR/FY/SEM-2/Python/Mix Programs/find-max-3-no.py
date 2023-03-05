n1=int(input('enter n1:'))
n2=int(input('enter n2:'))
n3=int(input('enter n3:'))
if n1>n2 and n1>n3:
    print('max=',n1)
elif n2>n3:
    print('max=',n2)
elif n1 == n2 == n3:
    print('all are equal',n1)
else:
    print('max=',n3)
    
'''

output:1

enter n1:333
enter n2:4
enter n3:3
max= 333

output:2

enter n1:23
enter n2:222
enter n3:1
max= 222

output:3

enter n1:1
enter n2:1
enter n3:1
all are equal 1

output:4

enter n1:23
enter n2:22
enter n3:233
max= 233



'''
