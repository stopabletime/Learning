/* Here is a program to find the Area of circle
</> Naveen
Date 22oct 2021
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float rad,area;
    printf("\n\t This program is to find the area of circle");
    printf("\n\t *****************************************");
    printf("\n\n\n\t Enter the radius of circle :");
    scanf("%f",&rad);
    area=PI*rad*rad;
    printf("\n\t Here value of PI is %8.2f",PI);
    printf("\n\n\t Area of circle having radius %8.2f is %8.2f",rad,area);
}