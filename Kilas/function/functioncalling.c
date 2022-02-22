// Program to develop small scale calculator
// Date : 22 jan 2022
// </> Navee
#include<stdio.h>
#include<conio.h>
void sum(){
    int num1,num2,sum=0;
    printf("\n\t Program to add two number ");
    printf("\n\t *******************************");
    printf("\n\t Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("\n\tSum of %d + %d is %d",num1,num2,sum);
}
void main(){
    sum();
    sub();
}
void sub(){
    int num1,num2,sub=0;
    printf("\n\t Program to subtract two number ");
    printf("\n\t *******************************");
    printf("\n\t Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    sub=num1-num2;
    printf("\n\tSub of %d + %d is %d",num1,num2,sub);
}