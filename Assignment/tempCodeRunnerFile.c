/* Here is a program to add two numbers
</> Naveen
Date: 19 oct 2021 */
#include<stdio.h>
#include<conio.h>

int main()
{
    //header
    printf("\n\t Program to add numbers ➕");
    printf("\n\t ******************************");
    //declaring variable
    int num1,num2,sum;
    //prompt user to give input
    printf("\n\tEnter First Number :");
    scanf("%d",&num1);
    printf("\n\tEnter Second Number :");
    scanf("%d",&num2);
    //Calculations
    sum=num1+num2;
    //Printing output
    printf("Sum of %d and %d = %d",num1,num2,sum);
}