n=int(input('enter n to check the no is dividiable by 5 or 11:'))
if n%5 == 0:
    print('yes it can divide by 5')
else:
    print('not by 5')
if n%11 == 0:
    print('yes it can be divide by 11')
else:
    print('not by 11')
    
'''
output : 1

enter n to check the no is dividiable by 5 or 11:99
not by 5
yes it can be divide by 11

output : 2

enter n to check the no is dividiable by 5 or 11:100
yes it can be divide by 5
not by 11

output : 3

enter n to check the no is dividiable by 5 or 11:110
yes it can be divide by 5
yes it can be divide by 11

'''
