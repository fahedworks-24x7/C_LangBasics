#include <stdio.h>

int main()
{
int i,sum=0,compare=1,array[10], x;
for(i=0; i<10; i++)
	{
	scanf("%d,", &array[i]);
	}
scanf("%d",&x);

for(i=0; i<10; i++)
	{
	if(x==array[i])
		{
		sum+=1;
		break;
		}
	compare++;
	}
if(sum==0)
	{
	compare=compare-1;
	}

printf("%d %d", sum, compare);
		 
return 0;
}
