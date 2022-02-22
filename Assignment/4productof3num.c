/* Here is a program to find product of three numbers
</> Naveen
Date: 19 oct 2021 */
#include<stdio.h>
#include<conio.h>

int main()
{
    //Header
    printf("\n\tHere is program to find product of three numbers ✖");
    printf("\n\t*********************     ***************************");
    //Declaring variable
    int num1,num2,num3,product;
    //Prompt the user to give input
    printf("\n\t Enter 1st number :");
    scanf("%d",&num1);
    printf("\n\t Enter 2nd number :");
    scanf("%d",&num2);
    printf("\n\t Enter 3rd number :");
    scanf("%d",&num3);
    //Calculations
    product=num1*num2*num3;
    //Giving output
    printf("\n\tProduct of %d,%d,%d is %d",num1,num2,num3,product);
}