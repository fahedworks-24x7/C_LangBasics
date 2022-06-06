#include <stdio.h>
#include <stdlib.h>

void bubblesort(long long int array[20])    //*Declaring and Defining BubbleSort*//
{
  long long int store;                      //*Store is a variable we use in future for swapping*//
  int i,j;
  int swap=0, comp=0;
  for(i=0; i<19; i++)
		{
		 for(j=0; j<19-i; j++)
			{
			 if(array[j]>array[j+1])       //*We need to swap when we find an element lesser than the first element*//  
				{
				             //*Swapping*//
				            store = array[j];
				           array[j] = array[j+1];
				            array[j+1] = store;
				                swap++; //*Increases by 1 whenever two elements are swapped*//
				} 
			 comp++;                        //*Increases by 1 whenever two elements are compared*//		
			}
		}
for(i=0; i<20; i++)
	{
	printf("%lld ", array[i]);                     //*Prints the sorted array*//
	}
printf("\n");
printf("%d %d\n", swap, comp);                         //*Prints the count of swaps and comparisions respectively*//
}

int main()                                             //*Main function begins here*//  
{
long long int array[20];                               
int i;
for(i=0; i<20; i++)
	{
	scanf("%lld,", &array[i]);
	}
bubblesort(array);                                     //*Calling the BubbleSort function*//
return 0;
}


