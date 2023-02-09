//Odd Even count in 1d array using UDF in c.
//Created by Ariba Rajbhara.
//05-02-23.

#include<stdio.h>
#include<conio.h>
#define n 5
void oe(int a[n])
{
int i,odd=0,even=0;
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
if(a[i]%2==0)
even++;
else
odd++;
}
printf("odd=%d even=%d",odd,even);
}
void main()
{
int a[n],i;
clrscr();
for(i=0;i<n;i++)
{
printf("enter a[%d]:",i);
scanf("%d",&a[i]);
}
oe(a);
getch();
}
