//wap to take two arrays from a user and find their intersection and union  
#include <stdio.h>

int main()
{ 
	int s1,s2,i,j,count=0;
  printf("Enter the size of array 1");
 scanf("%d",&s1);
int arr1[s1];
 printf("enter the elements of array 1");
	for(i=0;i<s1;i++)
	{ scanf("%d",&arr1[i]);
	}
 
  printf("enter the size of array 2");
	scanf("%d",&s2);
int arr2[s2];
	printf("enter the elemts of array 2");
	for(i=0;i<s2;i++)
	{ scanf("%d",&arr2[i]);
    }
	for(i=0;i<s1;i++)
	{
    
	for(j=0;j<s2;j++)
	{
     if(arr1[i]==arr2[j])
		{ count++;
	    }
     }				
	 } 
	 int arr3[count],k=0;
	 for(i=0;i<s1;i++)
	{
    
	for(j=0;j<s2;j++)
	{
     if(arr1[i]==arr2[j])
		{ arr3[k++]=arr1[i];
	    }
     }				
	 } 
	for(k=0;k<count;k++)
	{
		printf("intersection is= %d" ,arr3[k]);
		
    }  
	
	
	
	
	
	
	
	return 0;
}