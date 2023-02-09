//Sum of natural number using UDF.
//created by Ariba Rajbhara.
//24-01-2023

#include<stdio.h>
#include<conio.h>
int nat(n)
{
int i,sum=0;
for(i=0;i<=n;i++)
{
sum+=i*i;
}
return sum;
}
int main()
{
int n,ans;
printf("enter n:" );
scanf("%d",&n);
ans=nat(n);
printf("%d",ans);
getch();
}
