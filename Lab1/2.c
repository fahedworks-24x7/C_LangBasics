#include<stdio.h>
int main()
{int a,b;
scanf("%d%d",&a,&b);
if(a<=0||b<=0)
{printf("Invalid input");}
else
{if(a<b)
{printf("%d",b%a);}
else
{printf("%d",a%b);}
}
}
