/* Here is a proram to find perimeter of rectangle
</> Naveen
Date : 22oct2021 
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int ln,br,permtr;
    printf("\n\n\tThis program is to find perimeter of rectangle ");
    printf("\n\n\t***********************************************");
    printf("\n\t Enter length of rectangle : ");
    scanf("%d",&ln);
    printf("\n\t Enter breadth of rectangle : ");
    scanf("%d",&br);
    permtr=2*(ln+br);
    printf("\n\tPerimeter of rectangle of given length %d and breadth %d is %d",ln,br,permtr);
}