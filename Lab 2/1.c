#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
 int a,b,i,j=0,x[100];
 scanf("%d%d",&a,&b);
 a=abs(a);
 b=abs(b);
 if(a==0 && b==0)
	{
	  printf("Invalid input");	
	}
 else if(a==0)
	{
	  printf("%d",b);
	}
 else if(b==0)
	{
	  printf("%d",a);
	}
 else
 	{
 	  for(i=b;i>=1;i--)
    	  	{
			  if(a%i==0 && b%i==0)
				{
				  x[j++]=i;  
				}
		
			}
      printf("%d",x[0]);
	}
return 0;
}
