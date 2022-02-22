// Realloc funtion 
// Date 13 jan 2022
// </> Naveen

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>
void main(){
    //Declare variables
    char *mem_allocation;
    printf("\n\t Example of realloc and free function in C");
    printf("\n\t ******************");
    mem_allocation=malloc(20*sizeof(char));
    if (mem_allocation==NULL)
    {
        printf("\n\t Couldn't able to allocate requested memory");
    }
    else
    {
        strcpy(mem_allocation,"space is extended upto"\"100 characters");
    }
    printf("\n\t Resized memory \t:\t %s\n",mem_allocation);
    free(mem_allocation);
    printf("\n\t End of program");
    printf("\n\t ****************");
    getch();
}
