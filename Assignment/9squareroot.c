/* Here is a program to find a square root of given number
</> Naveen
Date : 22 oct 2021
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int num,sqart;
    printf("\n\tThis is a program to find square root of a given number");
    printf("\n\t *****************************************************");
    printf("\n\t Enter the number : ");
    scanf("%d",&num);
    sqart=sqrt(num);
    printf("\n\t Square root of %d is %d",num,sqart);
}