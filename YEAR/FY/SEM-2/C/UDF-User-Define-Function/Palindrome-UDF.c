//Palindrome in c using UDF.
//Created by Ariba Rajbhara.
//24-01-23.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void pal(char s1[20])
{
char s2[20];
int cmp;
strcpy(s2,s1);
strrev(s1);
cmp = strcmp(s1,s2);
if(cmp == 0)
{
printf(" palindrome ");
}
else
{
printf(" it is not palindrome ");
}
getch();
}
void main()
{
char s1[20];
clrscr();
printf("enter the value of string");
scanf("%s",&s1);
pal(s1);
}
