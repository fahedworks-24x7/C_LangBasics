#include<stdio.h>
int main()
{
 int n,i,j,s=0,a=0;
 scanf("%d",&n);
if(n>1)
{
 for(i=1;i<=n;i++)
 {
 	 s=0;
  	 for(j=1;j<=i;j++)
  	 { 
   		 if(i%j==0)
  	   	{
     		   s++;
    	        }
         }
         if(s==2)
       	  {
           a++;
          }   
 	  
 }
 printf("%d ",a);
}
else
{
 printf("0");
}
 return 0; 
}
