/* Program to check the quadrant of the given coordinates
</> Naveen
Date: 12Nov2021 */

#include<stdio.h>
#include<conio.h>

void main()
{
    int x,y;
    printf("\n\t Program to check the Quadrant");
    printf("\n\t *********************************");
    printf("\n\n\t Enter X-Coordinate :");
    scanf("%d",&x);
    printf("\n\n\t Enter Y-Coordinate :");
    scanf("%d",&y);
    if(x>0 && y>0)
    printf("\n\t I Quadrant");
    else if(x>0 && y<0)
    printf("\n\t II Quadrant");
    else if(x<0 && y<0)
    printf("\n\t III Quadrant");
    else
    printf("\n\t IV Quadrant");    
}