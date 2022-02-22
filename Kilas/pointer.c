#include<stdio.h>
void main (){
    int number=50;
    int *p;
    p=&number;
    printf("Address of p variabe is %x \n,p");
    printf("Value of p variable is %d \n",*p);
}