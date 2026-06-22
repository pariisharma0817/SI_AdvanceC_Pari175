#include <stdio.h>

int main(void) 
{ int ar[5]={3,4,56,78,98},target,i;
   printf("Enter the value you want to search in the array");
   scanf("%d",&target);
	for(i=0;i<5;i++)
	 { 
		if(ar[i]==target) 
		 { printf("element %d found at index value = %d",target,i);
		   break; 
		 } 
     }
	return 0;
}