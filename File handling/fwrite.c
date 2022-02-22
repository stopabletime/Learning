// Program for fwrite
// Date 3feb 2022
// </> Navee

#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
    int roll;
    char name[25];
    float marks;
};
void main (){
    FILE *fp;
    char ch;
    struct student Stu;
    printf("\n\t Example of fwrite() function in C");
    fp=fopen("Student.dat","w");
    //Statement 1
    if(fp == NULL)
    {
        printf("\n Can't open file or file doesn't exist");
        exit(0);
    }
    do
    {
        printf("\n Enter Roll number :");
        scanf("%d",&Stu.roll);
        printf("\n Enter Name :");
        scanf("%s",&Stu.name);
        printf("\n Enter Marks :");
        scanf("%f",&Stu.marks);
        fwrite(&Stu,sizeof(Stu),1,fp);
        printf("\n\t Do you want to add another data (y/n) :");
        ch=getche();
    }while(ch=='y' || ch=='Y');
    printf("\n\t Data written successfully..");
    fclose(fp);
    printf("\n\t End of the program");
    getch();    
}