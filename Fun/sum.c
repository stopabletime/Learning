/* This is a program to take prompt from user
Here we will take input from user and sum it
</> Navee
Date :11 oct 2021 */

#include<stdio.h>
#include<conio.h>
int main()
{
    //declare three variable
    int num1,num2,sum;
    printf("\n Program to take input from user \n");
    printf("\n***********************************\n");
    //prompt the user to take input
    printf("\n Enter the number :");
    scanf("%d",&num1);
    printf("\n Enter the number :");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("\n %d + %d = %d",num1,num2,sum);
    return 0;
}