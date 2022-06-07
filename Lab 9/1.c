#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
	{
	int i,j,k,res;
	i = atoi(argv[2]);
	j = atoi(argv[3]);
	k = *argv[4];
	
	if(k='+')
		{
		res = i+j;
		}
	else if(k='-')
		{
		res = i-j;
		}
	else if(k='x')
		{
		res = i*j;
		}
	else if(k='/')
		{
		res = i/j;
		}

	printf("%d\n", res);
	return 0;
	}

