/* Here is a program to find average of marks scored in 5 subjects
</> Naveen
Date: 19 oct 2021 */
#include<stdio.h>
#include<conio.h>

int main()
{
    //Header
    printf("\n\t Program to Find Average Of Marks Scored in 5 Subjects");
    printf("\n\t ****************** ****************************************");
     //Declaring variable
     float s1,s2,s3,s4,s5,sum,avg;
     //Prompt user for input
     printf("\n\t Marks scored in 1st Subject :");
     scanf("%f",&s1);
     printf("\n\t Marks scored in 2nd Subject :");
     scanf("%f",&s2);
     printf("\n\t Marks scored in 3rd Subject :");
     scanf("%f",&s3);
     printf("\n\t Marks scored in 4th Subject :");
     scanf("%f",&s4);
     printf("\n\t Marks scored in 5th Subject :");
     scanf("%f",&s5);
     //Calculation Average
     sum=s1+s2+s3+s4+s5;
     avg=sum/5;
     //Printing output
     printf("\n\t Average of %8.2f,%8.2f,%8.2f,%8.2f,%8.2f = %8.2f",s1,s2,s3,s4,s5,avg);
}