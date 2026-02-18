#include<stdio.h>

void main()
{
	int i, j, temp = 11;
	
	for(i=1; i<=5 ; i++)
	{
		for(j=temp ; j<temp+i ; j++)
		{
			printf("%d ",j);
		}
		temp+=i;
		printf("\n");
	}
}