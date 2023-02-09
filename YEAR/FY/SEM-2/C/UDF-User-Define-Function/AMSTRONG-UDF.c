//Amstrong in c using UDF.
//Created by Ariba Rajbhara.
//24-01-23.

#include<stdio.h>
#include<conio.h>
void ams(int num)
{
int originalNum, remainder, result = 0;
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
	remainder = originalNum % 10;

       result += remainder * remainder * remainder;

       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
	printf("%d is an Armstrong number.", num);
    else
	printf("%d is not an Armstrong number.", num);
    getch();
}

int main() {
    int num;
    clrscr();
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    ams(num);
    }
