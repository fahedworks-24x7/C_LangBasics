#include <stdio.h>
#include <stdlib.h>

void selectionsort(long long int array[20])           //*Declaring and defining Selection Sort*//
{
  long long int store;                                //*We'll use this variable for sorting*// 
  int min,i,j,swap=0,comp=0;
  for(i=0; i<19; i++)
	{
	min = i;                                      //*We are considering first element to be the minimum*//  
	for(j=i+1; j<20; j++)
		{comp++;                              //*This increases by 1 every time a comparision takes place*//
		if(array[j] < array[min])             //*If we find an element lesser than our minimum,*//
			{
			min=j;                        //*We change our minimum*//
			}
		}
	if(min!=i)                                    //*This condition happens when minimum is changed*//
		{                                     //*Swapping Process*//
		store = array[i];
		array[i] = array[min];
		array[min] = store;
		swap++;                               //*To count the number of swaps*//  
		}
	}
for(i=0; i<20; i++)
	{
	printf("%lld ", array[i]);                    //*Printing the sorted array*//
	}
printf("\n");
printf("%d %d", swap, comp);                          //*This gives the number of swaps and comparisions occured in the process*//
}

int main()                                            //*Here we begin our main function*//
{
long long int array[20];
int i;
for(i=0; i<20; i++)
	{
	scanf("%lld,", &array[i]);
	}
selectionsort(array);                                  //*Calling the Selection Sort Functon*//
return 0;
}

