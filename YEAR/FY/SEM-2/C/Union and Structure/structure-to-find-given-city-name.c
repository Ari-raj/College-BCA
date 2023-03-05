#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee{
 char nm[15];
 int p;
 char c[15];
 };
 typedef struct employee emp;
void main()
{
 int i;
 char city[5];
 emp e[5];
 clrscr();
 for(i=0;i<5;i++)
{
printf("enter name:");
scanf("%s",&e[i].nm);
}
 for(i=0;i<5;i++)
{
printf("enter city:");
scanf("%s",&e[i].c);
}
 for(i=0;i<5;i++)
{
printf("enter p:");
scanf("%d",&e[i].p);
}
printf("enter city to find");
scanf("%s",&city);

 for(i=0;i<5;i++)
{
if(strcmp(e[i].c,city)==0)
{
printf("%s\t%s\t%d\n",e[i].nm,e[i].c,e[i].p);
}
}
getch();
}
