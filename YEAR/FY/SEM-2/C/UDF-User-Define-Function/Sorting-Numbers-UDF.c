//soring of numbers in c using UDF.
//Created by Ariba Rajbhara.
//05-02-23.

#include<stdio.h>
#include<conio.h>
void sort(int a[6])
{
int i,j,t=0;
for(i=0;i<6;i++)
{
for(j=i+1;j<6;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<6;i++)
{
printf("%d\t",a[i])   ;
}
}
void main()
{
int i,n[6];
clrscr();
for(i=0;i<6;i++)
{
printf("enter n:");
scanf("%d",&n[i]);
}
sort(n);
getch();
}
