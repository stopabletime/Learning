#include<stdio.h>
#include<conio.h>
void main(){
    // Declare File Pointer
    FILE *fp;
    int c;
    printf("\n\t Example of fopen");
    printf("\n\t *************************");
    // To print output from the file
    //Opening file for reading
    fp=fopen("file.txt","r");
    if(fp=NULL){
        perror("Error in opening file");
        getch();
    }
    do {
        c=fgetc(fp);
        if(feof(fp)){
            break;
        }
        printf("\n\t %c",c);
    }while(1);
    fclose(fp);
}