#include <stdio.h>

int main(void)
 {
  int n,i,pos; 
	printf("Enter size of array:");
	scanf("%d",&n);
 int arr[10];
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{ scanf("%d",&arr[i]);
		}
  printf("Enter the position of element which you want to delete:");
  scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{ arr[i]=arr[i+1];
	}
	n--;
	printf("Array after deletion:");
	for(i=0;i<n;i++)
	 { printf("%d",arr[i]);
	 }

	return 0;
}