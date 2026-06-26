#include <stdio.h>

int main(void)
{ int a=5,b=10;
	printf("Values before swapping a= %d and b= %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;	
	printf(" \nValues after swapping a= %d and b= %d",a,b);
	return 0;
}