#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
int checkWin();
void drawBoard();
char square[10] = {"0","1","2","3","4","5","6","7","8","9"};
int main(){
    int player =1,i,choice;
    char mark; //X,O
    do{
        drawBoard();
        player=(player%2)?1:2;
        printf("Player %d, enter the choice :");
        scanf("%d",&choice);
        if (choice==1 && square[1]=="1")
        square[1]=mark;
        else if (choice==2 && square[2]=="2")
        square[2]=mark;
        else if (choice==3 && square[3]=="3")
        square[3]=mark;
        else if (choice==4 && square[4]=="4")
        square[4]=mark;
        else if (choice==5 && square[5]=="5")
        square[5]=mark;
        else if (choice==6 && square[6]=="6")
        square[6]=mark;
        else if (choice==7 && square[7]=="7")
        square[7]=mark;
        else if (choice==8 && square[8]=="8")
        square[8]=mark;
        else if (choice==9 && square[9]=="9")
        square[9]=mark;
        else{
            print("Invalid option !");
            player--;
            getch();
        }
        i=checkWin();
        player++;
    }while(i==-1);
}