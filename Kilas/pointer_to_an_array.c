#include<stdio.h>
void main() {
    /* an array with 5 elemenets */
    double balance[5]= {1000.0,2.0,3.4,17.2,69.6};
    double *p;
    int i;
    p=balance;

    // Output each arrays elements value
    printf("Array value using \n");
    for (i=0; i<5; i++)
    {
         printf("*(p+%d) : %f\n", i , *(p+i));
    }
    printf("Array values using balance as address\n");
    for (i=0; i<5; i++)
    {
    printf("*(balance + %d) : %f\n", i, *(balance + i));
    }
    return 0;
}