//Multiplication of 2 matrix,
//Created by Ariba Rajbhara.
//16-1-2023

#include<stdio.h>
#include<conio.h>
int main()
{
 int m1[10][10],m2[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;
 clrscr();
 printf("Enter rows and column for the first matrix: ");
 scanf("%d %d", &r1, &c1);
 printf("Enter rows and column for the second matrix: ");
 scanf("%d %d", &r2, &c2);
 // Taking input until 1st matrix columns is not equal to 2nd matrix row
 while(c1 != r2)
 {
printf("Error!!!! Enter rows and columns again.\n");
printf("Enter rows and columns for the first matrix: ");
scanf("%d %d", &r1, &c1);
printf("Enter rows and columns for the second matrix: ");
scanf("%d %d", &r2, &c2);
 }
 printf("\nEnter elements for First Matrix: \n");
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
printf("Enter m1[%d][%d] : ", i, j);
scanf("%d", &m1[i][j]);
 }
 }
 printf("\nEnter elements for Second Matrix: \n");
 for(i = 0; i < r2;i++)
 {
 for(j = 0; j < c2; j++)
 {
printf("Enter m2[%d][%d] : ", i, j);
scanf("%d", &m2[i][j]);
 }
 }
 for (i = 0; i < r1;i++) // first matrix row
 {
 for (j = 0; j < c2; j++) // second matrix column
 {
 mul[i][j] = 0;
for (k = 0; k < r2; k++)
{
 mul[i][j] = mul[i][j] + ( m1[i][k] * m2[k][j] );
}
 }
 }
 printf("\n First Matrix : \n");
 for(i=0;i < r1;i++)
 {
 for(j=0;j < c1;j++)
 {
printf("%d\t", m1[i][j]);
 }
 printf("\n");
 }
 printf("\n Second Matrix:\n");
 for(i=0;i < r2;i++)
 {
 for(j=0;j < c2;j++)
 {
printf("%d\t", m2[i][j]);
 }
 printf("\n");
 }
 printf("\nMultiplication of Matrices : \n");
 for(i=0;i < r1;i++)
 {
 for(j=0;j < c2;j++)
 {
printf("%d\t", mul[i][j]);
 }
 printf("\n");
 }
 getch();
 return 0;
}
