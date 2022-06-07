#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>                         //*UNIX library to get time and date*//

int main()
{
char var[40];                               //*This holds the time and date*//
system("date > f1.txt");                    //*This initializes date*//

FILE *f1;
f1 = fopen("f1.txt", "r");                  //*Opening the file to enter first time and date*//
while(fgets(var, 40, f1) != NULL)           //*Applying loop to print every character of time and date*//
	{
	printf("%s",var);                   //*Printing the var string into the file.*//
	}
fclose(f1);                                 //*Closing first File*// 

sleep(5);                                   //*This pauses the program for 5 seconds*//

system("date > f2.txt");                    //*This initializes latter date*//

FILE *f2;
f2 = fopen("f2.txt", "r");                  //*Opening the second file to enter second time and date*//
while(fgets(var, 40, f2) != NULL)           //*Applying loop to print every character of time and date*//
	{
	printf("%s",var);                   //*Printing the var string into the file.*//
	}
fclose(f2);                                 //*Closing second File*// 

return 0;
}
