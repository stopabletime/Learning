//Program to get square of number by function calling

#include<stdio.h> //Function protoype, also called function declaration 
float square(float x);  //Main function, prorgram starts from here

void main(){
    float m,n;
    printf("\n\t Example of the funtion to find square");
    printf("\n\n\t Enter number : ");
    scanf("%f",&m);
    //function call
    n=square(m);
    printf("\n\t Square of %4.1f is %4.1f",m,n);
}
float square(float x)//function definition
{
    float p;
    p=x*x;
    return(p);
}
