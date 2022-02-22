/* Here is a program to find simple interest
</> Naveen
Date: 19 oct 2021 */
#include<stdio.h>
#include<conio.h>
//Defining values
#define INTEREST 0.1
int main()
{
    //Header
    printf("\n\t Program to calculate simple interest");
    printf("\n\t *************************************\n\n");
    //Declaring Variables
    int p_amount,year;
    float SI;
    //Prompt user to take input
    printf("\n\t Annual rate of interest per annum is %8.2f",INTEREST);
    printf("\n\t Enter Principal Amount :");
    scanf("%d",&p_amount);
    printf("\n\t Year for simple interest you want to calculate :");
    scanf("%d",&year);
    //Simple interest formula
    SI=p_amount*INTEREST*year;
    //output
    printf("\n\t Simple interest for %d year is %8.2f",year,SI);
}