n=int(input('enter leap year to check:'))
if n % 400 == 0:
    print('its a leap year')
elif n % 100 == 0:
    print('its a leap year')
elif n % 4 == 0:
    print('its a leap year')
else:
    print('not a leap year')


'''

output:1
enter leap year to check:2004
its a leap year

output:2

enter leap year to check:2002
not a leap year
'''
