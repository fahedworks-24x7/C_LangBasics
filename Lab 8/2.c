#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *s, char *t); //*Declaring the Strend function*//
int main() //*Main Function*//
	{
	char *string, *tail;
 	
	string=(char*)malloc(sizeof(char)*255); //*Allocating Dynamic memory for the string and it's tail*//
	tail=(char*)malloc(sizeof(char)*255);

	scanf("%s", string);
	scanf("%s", tail);
	
	if(strend(string,tail)==1) //*Calling the Strend function*//
		{
		printf("%s\n",tail); //*Prints the tail if it is present in the first string*//
		}
	else
		{
		printf("0\n"); //*prints 0 if the tail is not a part of string*//
		}
	return 0;
	}


int strend(char *string, char *tail) //*Defining the Strend Function*//
	{
	int i,j=0,k=0,d,n1,n2,a;
	n1=strlen(string);
	n2=strlen(tail);
	d=n1-n2;
	if(d>0)
		{
		for(i=n1-n2; i<=n1-1; i++)
			{
			if(string[i]==tail[j])
				{
				k++; //*Increases count by 1 whenever each letter of tail matches with letter of string*//
				j++; //*To check the next element*//
				}
			else
				{
				j++; //*To check the next element*// 
				}
			}
		if(k==n2)
			{
			return 1;
			}
		else
			{
			return 0;
			}
		}
	else
		{
		return 0;
		}
	}
