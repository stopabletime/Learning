// Program for nested structure with pointer
// Date : 19 Jan 2022
// </> Navee

#include<stdio.h>
#include<string.h>
struct student_college_detail
{
    int college_id;
    char college_name[50];
};
struct student
{
    /* data */
    int id;
    char name[30];
    float percentage;
    //structure within structure
    struct student_college_detail clg_data;
}record1,*stu_data_ptr;
void main()
{
    //Declare Variable
    int i;
    printf("\n\t Program for nested structure");
    printf("\n\t ******************************");
    //prompt user to enter values
    printf("\n\t Enter details of student record : ");
    printf("\n\t Enter your roll no. ");
    scanf("%d",&record1.id);
    printf("\n\t Enter your name :");
    scanf("%s",&record1.name);
    printf("\n\t Enter your percentage :");
    scanf("%f",&record1.percentage);
    //prompt user to enter values
    printf("\n\t Enter details of student college record ");
    printf("\n\t ***************************");
    printf("\n\t Enter your college ID :");
    scanf("%d",&record1.clg_data.college_id);
    printf("\n\t Enter your college name :");
    scanf("%s",&record1.clg_data.college_name); 

    stu_data_ptr=&record1;
        
    printf("\n\t The details entered");
    printf("\n\t ********************");

    printf("\n\t The Id of first student is: %d ",record1.id);
    printf("\n\t The Name of first student is: %s ",record1.name);
    printf("\n\t The percentage of first student is: %f ",record1.percentage);
    printf("\n\t The college Id of student is %d :" , record1.clg_data.college_id);
    printf("\n\t The college name of student is : %s",record1.clg_data.college_name);
    printf("\n\t The end of program");
}