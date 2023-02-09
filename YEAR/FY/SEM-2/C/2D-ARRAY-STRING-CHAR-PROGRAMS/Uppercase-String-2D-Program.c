//write a program to convert lower case letter to uppercase letter.
//Created by Ariba Rajbhara.
//17-01-2023.

#include<conio.h>
#include<string.h>
void main()
{
int i,j;
char str[5][20];
clrscr();

for(i=0;i<5;i++)
{
printf("enter string:");
gets(str[i]);
}
for(i=0;i<5;i++)
{
 for(j=0;str[i][j]!='\0';j++)
{
if(str[i][j]>='a' && str[i][j]<='z')
str[i][j]-=32;
}
printf("\n%s",str[i]);
}
getch();
}
