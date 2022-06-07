#include <stdio.h>

int main()
{
int i,j;
int n,m;
double polynomial1[11];
double polynomial2[11];

scanf("%d", &n);

for(i=n;i>=0;i--)
	{
	scanf("%lf",&polynomial1[i]);
	}

scanf("%d", &m);
for(j=m;j>=0;j--)
	{
	scanf("%lf",&polynomial2[j]);
	}

double temp1[n];
double temp2[m];

for(i=0;i<n+1;i++)
	{
	temp1[i]=polynomial1[i];
	}
for(j=0;j<m+1;j++)
	{
	temp2[j]=polynomial2[j];
	}

if(n>m)
	{
	for(i=0;i<m+1;i++)
		{
		temp1[i]=temp1[i]+temp2[i];
		}
	printf("%d ", n);
	for(i=n;i>=0;i--)
		{
		printf("%.2lf ", temp1[i]);
		}
	}
else
	{
	for(i=0;i<n+1;i++)
		{
		temp2[i]=temp1[i]+temp2[i];
		}
	printf("%d ", m);
	for(i=m;i>=0;i--)
		{
		printf("%.2lf ", temp2[i]);
		}
	}
printf("\n");

double product[n+m+1];
for(i=0; i<n+m+1; i++)
	{
	product[i]=0;
	}
for(i=0; i<n+1; i++)
	{
	for(j=0; j<m+1; j++)
		{
		product[i+j]+=polynomial1[i]*polynomial2[j];
		}
	}
printf("%d ", n + m);
for(i=n + m; i>=0; i--)
	{
	printf("%.2lf ", product[i]);
	}

return 0;
}
	
	


