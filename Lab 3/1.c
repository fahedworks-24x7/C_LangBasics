#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, r1, r2, a, b, r, d;                   
	scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &r1, &r2);

	if (r1 < 0 || r2 < 0)
	{
		printf("Invalid input\n");    // Since radii can't be negative.
	}
	else 
	{
		a=(x1-x2)*(x1-x2);
		b=(y1-y2)*(y1-y2);
		r=r1+r2;
		d=sqrt(a+b);                  // distance between two points (x1,y1) and (x2,y2) is given by Sqrt of (x1-x2)^2 + (y1-y2)^2

		if (r>=d && d>=abs(r1-r2)) //Since when two circles have an area in common, They either intersect or one lies inside the other.
		{
			printf("YES\n");
		}

		else //For two circles not touch, sum of radii is less than distance between centers. 
		{
			printf("NO\n");
		}
	}
	
return 0;
} 

