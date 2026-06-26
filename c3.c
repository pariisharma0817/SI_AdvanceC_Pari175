#include <stdio.h>

int main(void)
{ int a=5,b=10,temp;
	printf("Values of a= %d and b= %d before swapping",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n Values of a= %d and b= %d after swapping",a,b);
	
	
	return 0;
}