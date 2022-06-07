#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* rev(char *s);  //*Declaring Function which revervses the order of occurring Remainders*// 

char result(int x)   //*Defining the function which gives the string of remainders using alphabets and their ascii values*//
	{
	if(x>9) //*Where x is the remainder which gets input here.*//
		{
	        return (char)(x+87); //*It is actually x+(ascii value of a)-10; i.e, x+97-10=x+87)*//
		}
	else 
		{
	        return (char)(x+48); //*48 is the acsii value of 0; i.e, x+(ascii value of 87)*//
		}
	}

char* itob(int n,char *s,int b)   //*Defining the required function itob(n,s,b)*//
	{
	int i = 0; 
	while(n>0)
		{
		s[i]=result(n%b); //*Giving the string values remainders of n & b in the required format*//
		n=n/b; 
		i++;
		}
	s[i]='\0';
	
	return rev(s); alling 
	}

char* rev(char *s) //*Defining the Reverse Function*//
	{
	int i=0,l;	
	char *revstr; //*A string which is empty and takes all the values of remainder string in reverse.*//
	revstr=(char*)malloc(sizeof(char)*255);
	l=strlen(s);
	for(i=0;i<l;i++)
		{
		revstr[i]=s[l-i-1];
		}
	return revstr; //*Returns the reverse string*//
	} 


int main()  //*Main Function*//
	{
	char *s;	
	int n,b;
	s=(char*)malloc(sizeof(char)*255); //*Allocating Dynamic memory to the string pointer*//
	scanf("%d %d",&n,&b);
	printf("%s\n",itob(n,s,b)); //*Calling the itob function*// 
	return 0;
	}



