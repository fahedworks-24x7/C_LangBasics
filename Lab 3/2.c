#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i,j,n,L,p,t; 
int count=0;
char s1[2000]; //s1 is the string we give as input.
scanf("%s %d", s1, &n);
L=strlen(s1); //strlen gives the length of the input string.
p=L-n+1; //Where p implies maximum number of substrings which can be made.

if (L<n)
	{
	printf("0\n"); //As we cannot make substrings with greater characters than the main string.
	}
else
	{
	char s2[1000][1000]; //s2 is consists all the possible substrings.
	for (i=0; i<p; i++)
		{
		for (j=0; j<n; j++)
			{
			s2[i][j]=s1[i+j];
			}
		}
//Now, we have made a 2-Dimensional array which consists all the possible substrings which can be made.
	
	for (i=0; i<p; i++)
		{
		for (j=i+1; j<p; j++)
			{
			if (strcmp(s2[i],s2[j])==0) 
				{
				 count++; //This calculates the number of similar substrings.
				 break; //This stops over-calculation of a pair of substring twice or more.
				}
			}
		}

//Therefore, total number of substrings are, p-count.

	printf("%d\n",p-count);
	}
return 0;
}














