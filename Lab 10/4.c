#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *f1 = fopen("f1.txt", "r");     //*Opening file 1*//
FILE *f2 = fopen("f2.txt", "r");     //*Opening file 2*//
FILE *f3 = fopen("f3.txt", "w");     //*Creating file 3 to merge 1 and 2*//

char c;

while((c=fgetc(f1)) != EOF)          //*Applying loop till End Of File*//
	{
	fputc(c, f3);                //*Putting every character c of f1 into f3*//
	}
while((c=fgetc(f2)) != EOF)          //*Applying loop till End Of File*//
	{
	fputc(c, f3);                //*Putting every character c of f2 into f3*//
	}
fclose(f1);                          //*Closing file 1*//
fclose(f2);                          //*Closing file 2*//
fclose(f3);                          //*Closing file 3*//
return 0;
}

