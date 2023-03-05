n=input('enter maths operator:')
a=int(input('enter a:'))
b=int(input('enter b:'))
ans=0
if n == '-':
    ans=a-b
    print(ans)
elif n == '+':
    ans=a+b
    print(ans)
elif n == '*':
    ans=a*b
    print(ans)
elif n == '/':
    ans=a/b
    print(ans)
elif n == '**':
    ans=a**b
    print(ans)
else:
    print("enter correct operator")


'''

output:1

enter maths operator:**
enter a:2
enter b:2
2

output:1

enter maths operator:/
enter a:4
enter b:2
2.0

ootput:3

enter maths operator:7
enter a:3
enter b:4
enter correct operator

''''
