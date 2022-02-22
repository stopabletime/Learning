/* Here is program to find square of a number
</> Naveen
Date : 21oct2021
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\t This is a program to find square of a number");
    printf("\n\t *******************************************");
    long long num, sq;
    printf("\n\t Input the number you want to find square of :");
    scanf("%lld",&num);
    sq=num*num;
    printf("\n\t Square of %lld is %lld ",num,sq);
}