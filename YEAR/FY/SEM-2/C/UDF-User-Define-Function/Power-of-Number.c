//Power of number using UFD.
//created by Ariba Rajbhara.
//24-01-2023

#include<stdio.h>
#include<conio.h>
int power(int p,int n)
{
int i,ans=1;
for(i=0;i<p;i++)
{
ans=ans*n;
}
return ans;
}
int main()
{
int p,n,ans ;
getch();
printf("enter p and n:");
scanf("%d%d",&p,&n);
ans=power(p,n);
printf("%d",ans);
getch();
}
