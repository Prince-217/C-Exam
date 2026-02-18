#include<stdio.h>


int sumary()
{
	int i, size, sum = 0;
	
	printf("Enter the size of array :- ");
	scanf("%d",&size);
	
	int ary[size];
	
	printf("Enter array's elements :- \n");
	
	for(i=0 ; i<size ; i++)
	{
		printf("\na[%d] :- ",i);
		scanf("%d",&ary[i]);
	}
	
	printf("\nReverse 1D array is :- \n");
	
	for(i=size-1 ; i>=0 ; i--)
	{
		printf("%d, ",ary[i]);
		sum+=ary[i];
	}
	
	return sum;
}

void main()
{
	printf("\n\nThe sum of all elements is :- %d",sumary());
}