#include<stdio.h>
#include<conio.h>
int rec(int n)
{
if(n == 0)
return 0;
else
return (n*n)+rec(n-1);
}
int main()
{
int n,result;
printf("enter n:");
scanf("%d",&n);
result = rec(n);
printf("sum of sqr of number: %d",result);
getch();
}
