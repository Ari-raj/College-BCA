//write a program to count uppercase letter and lowercase letter.
//Created by Ariba Rajbhara.
//17-01-2023.

#include<conio.h>
#include<string.h>
void main()
{
int i,j,lc=0,uc=0;
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
uc++;
if(str[i][j]>='A' && str[i][j]<='Z')
lc++;

}
printf("\n%s has total %d=upper case %d=lower case",str[i],lc,uc);
uc=lc=0;
}
getch();
}
