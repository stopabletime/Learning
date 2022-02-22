


#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int id;
    char name[30];
    float percentage;
};
void main()
{
    //Declare Variable
    int i;
    struct student record1,record2;
    printf("\n\t Program is how to copy the structure");
    printf("\n\t ******************************");
    //prompt user to enter values
    printf("\n\t Enter details of firsr record :");
    printf("\n\t Enter your roll no. ");
    scanf("%d",&record1.id);
    printf("\n\t Enter your name :");
    scanf("%s",&record1.name);
    printf("\n\t Enter your percentage :");
    scanf("%f",&record1.percentage);

record2=record1;

    printf("\n\t The details entered");
    printf("\n\t ********************");

    printf("\n\t The Id of first student is: %d ",record1.id);
    printf("\n\t The Name of first student is: %s ",record1.name);
    printf("\n\t The percentage of first student is: %f ",record1.percentage);
    printf("\n\t The Id of second student is: %d ",record2.id);
    printf("\n\t The Name of second student is: %s ",record2.name);
    printf("\n\t The percentage of second student is: %f ",record2.percentage);
    printf("The end of program");
}