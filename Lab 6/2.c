#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void compare(char*,char*);

int main()
	{
	char *str1,*str2;                                               //*Declaring the pointers*//

	str1=(char*)malloc(sizeof(char)*255);                           //*Allocating dynamic memory for two strings*//
	str2=(char*)malloc(sizeof(char)*255);

	scanf("%s",str1);          
	scanf("%s",str2);

	compare(str1,str2);                                             //*Calling compare function*//

	return 0;
	}

void compare(char *str1, char *str2)                                     //*Defining compare function*//
	{
	int i,check=0,count;                                             //*Check is a variable which increases incase of different character*//
	int l1,l2;
	
	l1= strlen(str1);
	l2= strlen(str2);

	if(l1==l2)
		{
		for(i=0;i<l1;i++)
			{
			if(str1[i]!=str2[i])                              
				{ 
				check++;                                 //*Increasing check when different characters take comparision*//
				}
			}
		if(check==0)
			{
			count=0;                                         //*Count would be zero when check is zero since check=0 implies same string*//
			}
		else
			{
			count=1;                                         //*Coount is one if the strings are different*// 
			}
		}
	
	else                                                            //*If lengths are unequal, obviously strings are different*//
		{
		count=1;
		}

	printf("%d\n",count);
	}
 

