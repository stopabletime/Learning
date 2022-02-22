/* Here is a program to find the total purchase made on 4 different items purchased
</> Naveen
Date : 21 oct 2021
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n\tHere is program to find the total purchase made on four different items purchased.");
    printf("\n\t*******************************************************************************");
    int i1,i2,i3,i4,sum;
    printf("\n\t Price of 1st item :");
    scanf("%d",&i1);
    printf("\n\t Price of 2nd item :");
    scanf("%d",&i2);
    printf("\n\t Price of 3rd item :");
    scanf("%d",&i3);
    printf("\n\t Price of 4th item :");
    scanf("%d",&i4);
    sum=i1+i2+i3+i4;
    printf("\n\tYour total  purchase is : %d",sum);
}