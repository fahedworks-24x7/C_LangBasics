#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr[10],s,middle,first,last,output=0,compare=0;

    for(i=0;i<10;i++)
    {
        scanf("%d,",&arr[i]);    //taking input of array of 10 sorted integers
    }

    scanf("%d",&s);		//taking input of number ( x ) to be searched

    first=0;
    last=9;
    middle=(first+last)/2;

    while(first<=last)
    {
	compare+=1;

        if(s<arr[middle])		//if s is in the first half
        {
            last=middle-1;		
        }

        else if(arr[middle]==s) 	//if s is the middle integer
        {
            output=1;
            break;
        }

        else
        {
            first=middle+1;		//if s is in the second half
        }

     }
     
printf("%d %d",output,compare);	
	
return 0;
}
