/* Program to explain different formatted output
</> Naveen
Date : 20 october 2021 */
#include<stdio.h>
#include<conio.h>
int main()
{
    // Declaration of required input with value initialization
    int no=150;
    double dbl=20.123456;
    int a=10;
    int b=1234;
    int c=11111;

    printf("\n\t Example of different ways to use formatted output");
    printf("\n\t*****************************************************");
    //Displays various outputs of different data types

    printf("\n\t Integer value is %d \n",no);
    printf("\n\t Double value is %lf \n",dbl);
    printf("\n\t Octal value is %o \n",no);
    printf("\n\t Hexadecimal value is %x \n",no);

    printf("\n\t Example to display padding integers with 0's/spaces\n");
    getch();
}
