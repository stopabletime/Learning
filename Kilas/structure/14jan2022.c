// How to declare structure
// </> Naveen 
#include<stdio.h>
#include<string.h>
struct student
    {
        /* data */
        int id;
        char name[10];
        float percentage;
    };
void main(){
    // Declare structure variablestruct
    struct student,record1,record2;
    printf("\n\t Program to explain how to use structure");
    printf("\n\t ****************************");
    //prompt user to enter value
    printf("\n\t Enter details of first record  ");
    printf("\n\t Enter your Roll NO.");
    scanf("%d",&record1.id);
    printf("\n\t Enter your name :");
    scanf("%s",&record1.name);
    printf("\n\t Enter your percentage :");
    scanf("%f",&record1.percentage);
    printf("\n\t Enter details of second record : ");
    printf("\n\t Enter your roll no. ");
    scanf("%d",&record2.id);
    printf("\n\t Enter your name :");
    scanf("%s",&record2.name);
    printf("\n\t Enter your percentage : ");
    scanf("%f",&record2.percentage);

    printf("\n\t The details entered");
    printf("\n\t ********************");

    printf("\n\t The Id of first student is: %d ",record1.id);
    printf("\n\t The Name of first student is: %s ",record1.name);
    printf("\n\t The percentage of first student is: %f ",record1.percentage);
    printf("\n\t The Id of second student is: %d ",record2.id);
    printf("\n\t The Name of second student is: %d ",record2.name);
    printf("\n\t The percentage of second student is: %d ",record2.percentage);
    printf("The end of program");
}