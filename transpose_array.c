#include <stdio.h>

int main()
{ 
 int ar[5][3];
 int i,j;
	printf("Enter the elements of array: \n");
	for(i=0;i<5;i++)
	{ for(j=0;j<3;j++)
	 { 
	   scanf("%d",&ar[i][j]);
	 }
	}
	
	printf("The transpose of matrix is:");
	 for(j=0;j<3;j++)
	{ for(i=0;i<5;i++)
		{ printf("%d",a[i][j]);
		}
		 printf("\n");
	}	
	return 0;
}