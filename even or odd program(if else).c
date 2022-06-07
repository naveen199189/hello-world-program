#include<stdio.h>    
int main(){    
int number=0;    
printf("enter a number:");    
scanf("%d",&number);     
if(number%2==0)  // number divisible by 2 is even
{    
printf("%d is even number",number);    
}    
else
{    
printf("%d is odd number",number);  // numbers other than even are taken as odd  
}     
return 0;  
}    
