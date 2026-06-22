#include<stdio.h>
int main()
{ 
  int a[15];
  int i,sumi=0,sumo=0,rm,lm,temp,xylem=0,rem,count=0,s=0;
 for(i=0;i>=0;i++)
    {     
    rm=i%10;
    for(temp=i/10;temp>9;temp/=10)
      { rem = temp%10;
       sumi=sumi+rem;
      }
     lm=temp%10;
     sumo=rm+lm;
    if(sumi==sumo)
      { 
         count++;
        a[s++]=i;
      }
     if (count==15) 
         break;
        
    } 
    
    for(int j=0;j<sizeof (a)/sizeof(a[0]);j++)
    { printf("%d",a[j]);
    }
return 0;   
}