/* 7. Write a program in C 
to count a total number of duplicate elements in an array.
Made By ABC
Date 23-12-21
*/
#include <stdio.h>  
  
void  main()  
{  
     int arr1[100];
	int arr2[100];
	int arr3[100];
    int n,mm=1,ctr=0;
    int i, j;
        printf("\n\nCount total number of duplicate elements in an array:\n");
       printf("---------------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
/*----------------- copy in other array ------------------------------------*/
		for(i=0;i<n; i++)
        {
		arr2[i]=arr1[i];
		arr3[i]=0;
        }
/*------------------- mark the elements are duplicate -------------------------*/
	for(i=0;i<n; i++)
	{
		for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
				arr3[j]=mm;
				mm++;
				}
			}
			mm=1;
