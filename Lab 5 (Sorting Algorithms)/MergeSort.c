#include <stdio.h>
#include <stdlib.h>

void merge( long long array[], int f, int m, int l);          //*Declaring the merge function*//
void mergesort(long long array[], int l, int r);              //*Declaring the MergeSort function*//
int count=0;

int main()                                                    //*Main function begins here*//
{
int n;                                       
scanf("%d",&n);
long long array[n];
int i;
for(i=0; i<n; i++)
	{
	scanf("%lld,", &array[i]);
	}

mergesort(array, 0, n-1);                                     //*Calling the mergesort function*//
                                                              //*We have called merge function in the mergeSort itself*//
for(i=0; i<n; i++)
	{
	printf("%lld ", array[i]);                            //*Printing the sorted array*//
	}

printf("\n%d\n", count);                                      //*This gives the number of times merge function is called*//
return 0;
} 

void mergesort(long long array[], int l, int r)               //*Defining MergeSort function*//
{
if(l<r)
	{
	int m=l+(r-l)/2;	
	mergesort(array, l,m);
	mergesort(array, m+1, r);
	merge(array, l, m, r);
	count++;
	}
}
	


void merge(long long array[], int l, int m, int r)             //*Defining Merge function*//
	{
	int i,j,k;
	int l1 = m-l+1;
	int l2 = r-m;

	long long L[l1], R[l2];                                 //*Making Temporary Sub-Arrays*//

	for(i=0; i<l1; i++)
		{
		L[i] = array[l+i];                              //*Filling elements into Left Sub-Array*//
		}
	for(j=0; j<l2; j++)
		{
		R[j] = array[m+1+j];                            //*Filling elements into Right Sub-Array*//
		}
	i=0;
	j=0;
	k=l;

while(i<l1 && j<l2)                                              
	{
	if(L[i] <= R[j])
		{
		array[k] = L[i];
		i++;
		}
	else
		{
		array[k] = R[j];
		j++;
		}
	k++;
	}

while(i<l1)                                                    //*Here we print the left-over elements in Left Sub-Array*//
	{
	array[k] = L[i];
	i++;
	k++;
	}
while(j<l2)                                                     //*Here we print the left-over elements in Left Sub-Array*//
	{
	array[k] = R[j];
	j++;
	k++;
	}
}




















