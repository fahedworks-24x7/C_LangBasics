#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])            //*argc is the number of inputs given.*//     
{ 
if(argc==1)                                 //*This case is when one value in inputted. Sum is equal to value of that input*//
	{
	return 1;
	}
if(argc>1)                                  //*This is if more than one input is given*//
	{
	printf("%d ", argc-1);              //*We perform argc-1 because ./a.out is also counted into argc*//
	int i,sum=0;
	for(i=0; i<argc; i++)
		{
		sum = sum + atoi(argv[i]);  //*Performing atoi because in argv[] characters are inserted and to sum, we can add only integers.*//
		}
	printf("%d\n",sum);
	}

return 0;
} 
 




