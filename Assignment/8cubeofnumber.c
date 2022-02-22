/* Here is program to find square of a number
</> Naveen
Date : 21oct2021
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\t This is a program to find cube of a number");
    printf("\n\t *******************************************");
    long long num, cb;
    printf("\n\t Input the number you want to find cube of :");
    scanf("%lld",&num);
    cb=num*num*num;
    printf("\n\t Cube of %lld is %lld ",num,cb);
}