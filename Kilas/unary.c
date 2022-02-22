/* Here is a program for unary operator
</> Naveen
Date : 20 oct 2021
*/
#include<stdio.h>
#include<conio.h>

void main()
{
    printf("\n\t\t Here is a program for all the Unary operator");
    printf("\n\t\t **********************************************");
    int num,ans;
    printf("\n\t\t Enter the integer value :");
    scanf("%d",&num);
    ans= +num;
    printf("\n\t\t The + unary output for %d is %d",num,ans);
}