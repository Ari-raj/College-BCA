//Subtraction of 2 number using UFD.
//created by Ariba Rajbhara
//18-01-2023

#include<stdio.h>
#include<conio.h>
int sub(int a,int b) //called function
{
  int result;
  result=a-b;
  return result;
} //udf over
void main()
{          //main start
  int x,y,ans;
  clrscr();
  printf("enter 2 numbers to");
  scanf("%d%d",&x,&y);
  ans=sub(x,y);  //calling function
  printf("sub of 2 number :%d",ans);
  getch();
}
