#include<conio.h>
#include<conio.h>
float convert(float f)
{
float c;
c=(f-32)*5/9;
printf("c=%f",c) ;
getch();
}
void main()
{
float f;
printf("enter f:");
scanf("%f",&f);
convert(f) ;
}
