#include<stdio.h>
#include<conio.h>
void main() {
    //Declare file pointer
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;
    printf("\n\t Example of fscanf()");

    //To open file
    fp=fopen("file.txt","w+");
    fputs("We are in 2022",fp);
    rewind(fp);
    fscanf(fp,"%s %s %s %d", str1,str2,str3, &year);
    printf("\n\t Details fetched from file using fscanf() into variables ");
    printf("\n\t *****************");
    printf("\n\t Read string1 = |%s|\n",str1);
    printf("\n\t Read string2 = |%s|\n",str2);
    printf("\n\t Read string3 = |%s|\n",str3);
    printf("\n\t Read Integer = |%d|\n",year);
    fclose(fp);
    printf("\n\t End of program");
}