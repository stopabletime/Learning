#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    system("cls");
    squareroot();
    printf("\n\t Hello world");
}
/*void main(){
    printf("       /|\n");
    printf("     /  | \n");
    printf("   /    |\n");
}*/
void squareroot(){
    int num1;
    printf("\n\n Enter number : ");
    scanf("%d",&num1);
    printf("Square root of the number %d is :%4.2f",num1,sqrt(num1));
}