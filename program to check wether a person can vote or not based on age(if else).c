#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
     printf("you can vote");   
    }
else
{
  printf("sorry u cannot vote");
}
    
    return 0;
}
