#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int sub[3];
    int total;
};
void main(){
    struct student s[3];
    int i,j;
    for (i=0;i<3;i++){
        printf("\n\t Enter student %d marks :",i+1);
        for(j=0;j<3;j++){
            scanf("%d",&s[i].sub[j]);
        }
    }
for(i=0;i<3;i++){
    s[i].total=0;
    for(j=0;j<3;j++){
        s[i].total+=s[i].sub[j];
    }
    printf("\n\t Total marks of student %d is : %d",i+1,s[i].total);
}
}