n=int(input('enter n:'))
t1=0
t2=1
print(t1)
print(t2)
nx=t1+t2
i=0
while(i<n):
    print(nx)
    t1=t2
    t2=nx
    nx=t1+t2
    i=i+1
