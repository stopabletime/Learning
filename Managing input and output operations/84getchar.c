/* Here is a program to use getchar() function to read a character from keyboard
</>  Navee
Date : 23oct2021 */

//defining preprocessors
#include<stdio.h>
//Main function
main()
{
    printf("\n\t This program is to use getchar ");
    printf("\n\t ********************************");
    //defining varibale
    char answer;
    //prompting user to give input
    printf("\n\tIf you would like to know my name.");
    printf("\n\tType Y for yes and N for no :");
    //reading a character
    answer=getchar();
    if(answer=='Y' || answer=='y')
    printf("\n\t My name is Navee ");
    else
    printf("\n\t You are good for nothing");
}