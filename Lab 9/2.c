#include <stdio.h>

struct cmplx
	{
	float re;
	float img;
	};

int main()
{
struct cmplx z1,z2;
scanf("%f %f", &z1.re, &z1.img);
scanf("%f %f", &z2.re, &z2.img);

printf("%.2f + %.2fi\n", ((z1.re)+(z2.re)), ((z1.img)+(z2.img)));
printf("%.2f + %.2fi\n", ((z1.re)-(z2.re)), ((z1.img)-(z2.img)));
printf("%.2f + %.2fi", ((z1.re)*(z2.re))-((z1.img)*(z2.img)), ((z1.img)*(z2.re))+((z1.re)*(z2.img)));

return 0;
}
    
