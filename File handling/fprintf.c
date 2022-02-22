#include<stdio.h>
#include<conio.h>
void main() {
    // Declare file pointer
    FILE *fp;
    printf("\n\t Example of fprintf()");

    //To print output from the file
    fp=fopen("empty.txt","w+");
    fprintf(fp,"%s %s %s %d","We","are","in", 2020);
    fclose(fp);
    printf("\n\t End of program");
    getch();
}