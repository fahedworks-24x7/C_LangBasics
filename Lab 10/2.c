#include<stdio.h>
#include<stdarg.h>
#include<string.h>
void minprint(char *format, ...);                                                           //*Declaring minprint() function*//

int main(int argc,char *argv[])       
{
minprint("%s",argv[1]);                                                                      //*Calling minprint function*//
return 0;          
}

void PrintInteger(int num)                                                                   //*Defining a function to print Integer*//
  {
  int a = num;
  if (num > 9)                                                                               //*Case where inteeger is greater than 9*// 
     PrintInteger(num/10);
  if (num < 0)                                                                               //*Case of negative numbers*//                                                                              
    {
     putchar('-');
     num = -num;
    }
  putchar('0'+ (a%10));
  }

void minprint(char *format, ...)                                                             //*Defining minprint() function*//
   {
   va_list chain;                                                                            //*Chain is our argv which contains the inputs given*//
   char *c, *string_value;
   int integer_value;
   va_start(chain, format);                                                                  //*Starting to read our inputs*//
   for (c = format; *c; c++)                                                                 //*Running loop till end of our input c*//                        
   {
      if (*c != '%')                                                                         //*As long as c is not equal to % we keep putting the characters*//
      {
         putchar(*c);
         continue;
      }
      switch (*++c)                                                                           //*Using switch after % symbol*//
      {
	case 's':                                                                             //*In case of string or character we use putchar*//
            for (string_value = va_arg(chain, char *); *string_value; string_value++)
            putchar(*string_value);
            break;

	case 'd':                                                                             //*In case of d, to print integer*//                                                    
            integer_value = va_arg(chain, int);
            PrintInteger(integer_value);                                                      //*Calling function PrintInteger which prints that integer required*// 
            break;
	}
   }
   va_end(chain);                                                                             //*Closing chain*//
}

