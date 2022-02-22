//Program for addition by function calling
#include<stdio.h>
int add(int a,int b);
void main(){
    int a,b ,sum;
    printf("\n\t Enter the first and second number : ");
    scanf("%d %d",&a,&b);
    sum=add(a,b);
    printf("\n\t The sum of %d + %d is %d",a,b,sum);
}
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}