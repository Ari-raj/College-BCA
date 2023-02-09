//write a program to take input from user and output the string length.
//Created by Ariba Rajbhara.
//17-01-2023

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char a[5][10];
clrscr();
 for(i=0;i<5;i++)
 {
 printf("enter the string:");
 gets(a[i]);
 }
 for(i=0;i<5;i++)
 {
 printf("\n%s len is %d",a[i],strlen(a[i]));
 }
getch();
}
