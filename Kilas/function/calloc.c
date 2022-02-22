// C program to show use of calloc and free in c
// Date : 13jan2022
// </> Naveen
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main() {
    // Declare variables
    int n,i,*ptr,sum=0;
    printf("\n\t Example of calloc and free functions in C");
    printf("\n\t ****************************");
    printf("\n\t Enter number of element \t:\t");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int)); //memory allocated using calloc
    if(ptr==NULL){
        printf("\n\t Sorry! unable to allocate memory ");
        exit(0);
    }
    printf("\n\t Enter elements of array : ");
    for (i=0; i<n; i++)
    {
        printf("\n\t The element at %d position is ",i);
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("\n\t The sum of %d numbers is \t=\t%d",n,sum);
    free(ptr);
    printf("\n\t End of the program");
    printf("\n\t *******************");
    getch();
}