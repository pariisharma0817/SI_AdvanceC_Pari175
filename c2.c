#include <stdio.h>

int main(void)
{
 int a;
 float b;
 char ch;
 
 printf("Enter an integer:");
	scanf("%d",&a);
	printf("Enter a float:");
	scanf("%f",&b);
	printf("Enter a character:");
	scanf("%c",&ch);
	
	
	printf("\n Integer vale= %d",a);
	printf("\n Float value= %f",b);
	printf("\n Character value= %c",ch);
	
	return 0;
}