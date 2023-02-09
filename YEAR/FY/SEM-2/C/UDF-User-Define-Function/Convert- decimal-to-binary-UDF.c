//Write C Program to convert decimal number to binary number using the UDF.
//Created by Ariba Rajbhara.
//21-01-2023.

#include<stdio.h>
#include<conio.h>
int conv(int num)    //udf start
{
int i,j,a[100];
for(i=0;num>0;i++)
{
a[i]=num % 2;
num=num/2;
}
printf("the binary number: ");
for(j=i-1;j>=0;j--)            //j-- for reverse .
{
printf("%d",a[j]);          //for printing
}
} //udf end
void main()
{
int num;
clrscr();
printf("enter any number:");
scanf("%d",&num);
conv(num);   //calling udf
getch();
}
