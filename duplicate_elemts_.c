#include <stdio.h>

int main(void)
{int arr[]={2,3,4,5,2,3,0,7,8};
int i,j;
 int n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
	{  for(j=i+1;j<n;j++)
		{ 
		 if(arr[i]==arr[j])
			{ printf("duplicate element found %d ",arr[i]);
			break;
		    }
	    }
     }
	
	
	return 0;
}