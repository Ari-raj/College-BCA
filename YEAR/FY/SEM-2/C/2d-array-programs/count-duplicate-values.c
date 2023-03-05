#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,count=0;
clrscr();
for(i=0;i<10;i++)
{
printf("enter array elements:");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
printf("%d\t",a[i]) ;
}
printf("\n");
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]==a[j])
{
count=count+1;
printf("position :%d duplicate at :%d {%d,%d}\n",i+1,j+1,a[i],a[j]);
}
}
}
printf("\ntotal=%d",count);
getch();
}
