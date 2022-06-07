#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add(char *,char *);

int main()
	{
	char *str1, *str2;                                                          //*Declaring the pointers*//
	
	str1=(char*)malloc(sizeof(char)*255);                                       //*Allocating dynamic memory*//
	str2=(char*)malloc(sizeof(char)*255);

	scanf("%s", str1);
	scanf("%s", str2);

	add(str1, str2);                                                            //*Calling the add function*//

	return 0;
	}

void add(char *str1,char *str2)                                                      //*Defining addition function*//
	
	{
	int j,i,S;

	char *sum;

	S= strlen(str1) + strlen(str2);                                              //*S is the Length of combined string*//

	sum = (char*)malloc(sizeof(char)*S);                                         //*Allocating dynamic memory*//

	sum = str1;
	i = strlen(str1);
	j = 0;

	while(str2[j]!='\0')                                                        //*This is where string comees to end.*//
		{
		sum[i]=str2[j];
		i++;
		j++;
		}
	
	sum[i]='\0';
	printf("%s\n",sum);
	}

