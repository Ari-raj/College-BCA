//Write C Program to find maximum and minimum element in array using UDF
//created by Ariba Rajbhara
//20-01-2023

#include<stdio.h>
#include<conio.h>
int n(int arr[5])
{
int i,min=arr[0] ,max=arr[0];
for(i=0;i<5;i++)
{
if(arr[i] < min)
{
min = arr[i];
}
if(arr[i] > max)
{
max = arr[i];
}
}
printf("min element =%d",min);
printf("max element =%d",max);
return 0;
}
int main()
{
int a[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("enter 5 element:");
scanf("%d",&a[i]);
}
n(a);
getch();
}
