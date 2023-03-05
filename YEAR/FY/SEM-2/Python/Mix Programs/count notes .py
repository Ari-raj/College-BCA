n=int(input("what type of notes you wanna count:"))
am=int(input("enter amount:"))
ans=int
if n==10:
    ans=am/10
    print(ans)
elif n==20:
    ans=am/20
    print(ans)
elif n==50:
    ans=am/50
    print(ans)
elif n==100:
    ans=am/100
    print(ans)
elif n==200:
    ans=am/200
    print(ans)
elif n==500:
    ans=am/500
    print(ans)
elif n==2000:
    ans=am/2000
    print(ans)
elif n==2:
    ans=am/2
    print(ans)
elif n==1:
    ans=am/1
    print(ans)
elif n==5:
    ans=am/5
    print(ans)
else:
    print("there is only 1,2,5,10,20,50,100,200,500,2000. notes ans coins try again.")
