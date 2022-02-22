* 7. Write a program in C to 
Acept a element and search in an array 
 and Print the position where element lies, in case it found
 elsedisplay not found
Made By ABC
Date 23-12-21
*/
#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i,item,flag=0;
       printf("\n\t\tRead and Print the Position of Searched elements of an array:\n");
       printf("\n\t\t-----------------------------------------------\n");
    //INPUT
    printf("\n\t\t Input 10 elements in the array \t:\t");
    for(i=0; i<10; i++)
    {
	    printf("\n\t\t Element - %d \t:\t ",i);
	    scanf("%d", &arr[i]);
    }

   printf("\n\t\t Enter en element to search in the list \t :\t");
   scanf("%d",&item);

   //OUTPUT
	printf("\n\t\tElements in array are\t:\t ");
    for(i=0; i<10; i++)
    {
	printf("\n\t\t %d  ", arr[i]);
    }


    //PROCESS: FIND THE SUM OF ALL ARRAY ELEMENTS
    for(i=0;i<10;i++)
	{
		if(item==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
	    printf("\n\t\t E;ement %d doen not exist",item);
