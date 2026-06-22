#include <stdio.h>

int main(void)
{
int arr[]={5,6,7,8,9,2,27,87,98};
int i;
int n=sizeof(arr)/sizeof(arr[0]);
printf("the reversed array is ");

 for(i=n-1;i>=0;i--)
	{ 
		printf("  %d",arr[i]);
     } 
	
		
		
		
		
	
	return 0;
}