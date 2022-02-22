/* Here is a program to test the character type
</> Navee
Date: 23 oct 2021
*/
//Defining preprocessor
#include<stdio.h>
#include<ctype.h>
//main function
void main()
{
    //declaring variable
    char character;
    printf("\n\tThis program is to test the character type :");
    printf("\n\t********************************************");
    printf("\n\tPress any key : ");
    character=getchar();
    if (isalpha(character)>0)
    printf("\n\tThe character is a letter");
    else
    if(isdigit(character)>0)
    printf("\n\tThe character is a digit");
    else
    printf("\n\tThe characte is not alphanumeric. "); 
}