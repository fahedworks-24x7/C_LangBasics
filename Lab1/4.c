#include<stdio.h>
#include<math.h>
int main()
{double a,b,c,d;
scanf("%lf%lf%lf",&a,&b,&c);
d=b*b-4*a*c;
if(a!=0)
{
if(d>=0)
{printf("%.2lf %.2lf",(sqrt(d)-b)/(2*a),(-sqrt(d)-b)/(2*a));}
else
{printf("%.2lf+i%.2lf %.2lf-i%.2lf",(-b)/(2*a),(sqrt(-d))/(2*a),(-b)/(2*a),(sqrt(-d))/(2*a));}
}
return 0;
}
