/* Here is a program to accept student details and display them
</> Naveen
Date: 19 oct 2021 
*/

#include<stdio.h>
#include<conio.h>

void main()
{
    //Header
    printf("\n\t Program to accept student details from user");
    printf("\n\t****************** **********************");
    // Decalring variable
    char FNAME[20], SNAME[20], FFNAME[20], FSNAME[20];
    long long CNUM,FCNUM;
    //Taking input from user 
    printf("\n\t Enter Student Name : ");
    scanf("%s %s",&FNAME,&SNAME);
    printf("\n\t Enter Student Contact Number :");
    scanf("%lld",&CNUM);
    printf("\n\t Enter student Father name :");
    scanf("%s %s",FFNAME,FSNAME);
    printf("\n\t Enter Father contact number :");
    scanf("%lld",&FCNUM);

    printf("\n\tRepresenting the output : \n\n");
    printf("\n\t Student name is %s %s \n",FNAME,SNAME );
    printf("\n\t Student Contact Number is %lld \n",CNUM);  
    printf("\n\t Father name is %s %s \n",FFNAME,FSNAME);
    printf("\n\t Father contact number is %lld \n",FCNUM);
}
