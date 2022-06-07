#include <stdio.h>

double Add(double x, double y)
	{
	return x+y;
	}
double Sub(double x, double y)
	{
	return x-y;
	} 
double Multiply(double x, double y)
	{
	return x*y;
	}
double Div(double x, double y)
	{
	return x/y;
	}


int main()
	{
	double a,b;
	char c;
	scanf("%lf %lf %c", &a,&b,&c);

	double(*Add_PTR)(double,double)=&Add;
	double(*Sub_PTR)(double,double)=&Sub;
	double(*Multiply_PTR)(double,double)=&Multiply;
	double(*Div_PTR)(double,double)=&Div;
	
	if(c=='+')
		{
		printf("%0.4lf",(*Add_PTR)(a,b));
		}
	else if(c=='-')
		{
		printf("%0.4lf",(*Sub_PTR)(a,b));
		}
	else if(c=='*')
		{
		printf("%0.4lf",(*Multiply_PTR)(a,b));
		}
	else if(c=='/')
		{
		printf("%0.4lf",(*Div_PTR)(a,b));
		}
	return 0;
	}













































			
