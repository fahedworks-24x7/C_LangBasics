#include <stdio.h>
int main()
{
int i,j;
int inputs[10];
int outputs[10];

for(i=0; i<10; i++)
	{
	scanf("%d,", &inputs[i]);
	}
for (j=9; j>-1; j--)
	{
	printf("%d ", inputs[j]);
	}
return 0;
}
