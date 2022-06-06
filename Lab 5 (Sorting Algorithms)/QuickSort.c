#include<stdio.h>

int pIndex;
int partition(long long int array[], int start, int end)         //*Declaring Function for partition*// 
{
int pivot=array[end];                                            //*Choosing the last element as the pivot element*//
int i=(start-1);
for (int j=start;j<=(end-1);j++)
	{
	if(array[j]<pivot)                                       //*Moving all the elements lesser than pivot to the left*//
		{
		i++;
		int store;                                        //*Swapping*//
		store=array[i];
		array[i]=array[j];
		array[j]=store;
		}
	}                                                         //*Moving all the elements greater than pivot to right*//
	int store;                                                 //*Swapping*//
	store=array[i+1];
	array[i+1]=array[end];
	array[end]=store;
	return (i+1);
}

void quicksort(long long int array[],int p,int r)                  //*Declaring Function for Quick Sort*//
{	
if(p<r)
	{
	int q=partition(array,p,r);                                //*Calling partition function*//
	quicksort(array,p,q-1);                                    //*Calling quicksort after partition*//
	quicksort(array,q+1,r);
	pIndex=q;                                                  //*Index of the last pivot element*//
	}
}

int main()
{
int i=0,a;
 scanf("%d\n",&a);                                                   //*Input the size of array from the user*//
long long int array[a];
for(i=0;i<a;i++)                                                     //*Making an array with the input numbers*//
	{	
	scanf("%lld,",&array[i]);
	}
quicksort(array,0,a-1);                                             //*Calling the quicksort function*//
i=0;
for(i=0;i<a;i++)                                                    //*Printing the sorted array*/
	{
	printf("%lld ",array[i]);
	}                                                    
printf("\n%d\n",pIndex);                                              //*Index of the last pivot element*/
return 0;
}
