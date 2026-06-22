#include<stdio.h>
int main()
{
 int n,sum,power=0,rem,sum2 = 0, product = 1,temp2, dig;;
;
 printf("enter any number");
 scanf("%d",&n);  
    	for(int temp=n;temp>n;temp/=10)
   	 	{
    	  count++;
    	}
  
   	for(int temp1=n;temp1>0;temp1/=10)
   		{
			power=1;
       		rem=temp1%10;
	    }
       
	for(int j=1;j<=count;j++){
         power=power*rem;
         }
      
       sum=sum+power;
   }
 if(sum==n)
    { 
     printf("the number %d is an armstrong number\n",n);
    }
  }

/*forspynumber*/

    for(temp2= n; temp2> 0; temp2= temp2/ 10)
    {
        dig = temp2 % 10;
        sum = sum2 + dig;
        product = product * dig;
    }

    if(sum == product)
        printf("Spy Number");
    else
        printf("Not a Spy Number");

    return 0;
}
  
