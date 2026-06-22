#include <stdio.h>

int main()
{
 int ar[10],rev=0,rem,i,count=0;
 printf("enter the elements of array\n");
    for(i=0;i<=9;i++)
     { scanf("%d",&ar[i]);
      }
    for(int j=0;j<6;j++)
    {   
     for(int temp=ar[j];temp>0;temp/=10)
        { 
            rem=temp%10;
            rev=rev*10+rem;
        }
    if(rev==ar[j])
        {
         count++;
         }
    if(count>=1)
        { 
        printf("the array contains atleast one palindrome number");
            
        break;
        }
    }   
    return 0;
}
