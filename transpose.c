#include<stdio.h>
int main()
{
	int a[10][10],transpose[10][10],i,j,r,c;
	printf("enter the size of row and column :\n");   // declering the size of matrix
	scanf("%d%d",&r,&c);
	
	printf("enter the elements of matrix:\n");        // enter the the elements in the matrix
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	printf("enter elements of a%d%d:",i+1,j+1);       
	scanf("%d",&a[i][j]);
	}
	
	printf("matrix of the elements is :\n");   
	for(i=0;i<r;i++)
	for(j=0;j<r;j++)
	{
	printf("%d",a[i][j]);
	if(j==c-1)                          // condition print elements on next column
	printf("\n");
	}

	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	transpose [j][i]=a[i][j];         // transpose condition

	printf("\ntranspose of matrix :\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
        printf("%d",transpose[i][j]);
	if(j==r-1)
	printf("\n");
	}
	return 0;
}

