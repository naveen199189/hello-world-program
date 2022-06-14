#include <stdio.h>

int main() 
{
    int array[10]={100,50,65,20,42,5,6,4,3,5};
    int largest,second,loop;
    if(array[0]>array[1])
    {
        largest=array[0];
        second=array[1];
     }
        else
        {
            largest=array[1];
            second=array[0];
        }
     
        for(loop=2;loop<10;loop++)
{
        if(largest<array[loop])
        {
            largest=array[loop];
            second=largest;
        }
else if(second<array[loop])
{
    second=array[loop];
  }
} 
    printf("Largest number : %d \nSecond largest number : %d",largest,second);
    return 0;
}
