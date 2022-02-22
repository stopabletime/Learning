// Using function in the structure 
// Date: 20jan2022
// </> Navee

#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int id;
    char name[20];
    float percentage;
};
void func(struct student record); //global declaration of variable
void main(){
    int i;
    struct student record;
    printf("\n\t Program to passing the whole structure to the function ");
    printf("\n\t **************************************");

    //prompt user to enter values
    printf("\n\t Enter records of a student");
    printf("\n\t Enter roll no :");
    scanf("%d",&record.id);
    printf("\n\t Enter name :");
    scanf("%s",&record.name);
    printf("\n\t Enter percentage :");
    scanf("%f",&record.percentage);
    printf("\n\t function is called passing whole structure");
    func(record);
    printf("\n\t End of the record");
    printf("\n\t****************");
}
void func(struct student record){
    printf("\n\t The details of the record :");
    printf("\n\t ID is %d",record.id);
    printf("\n\t Name is %s",record.name);
    printf("\n\t Percentage is %f",record.percentage);
}