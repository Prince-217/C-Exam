#include<stdio.h>

void main()
{
	int i, size;
	
	printf("\nEnter the size of array :- ");
	scanf("%d",&size);
	
	int ary[size];
	int *p[size];
	
	for(i=0 ; i<size ; i++)
	{
		printf("a[%d] -> ",i);
		scanf("%d",&ary[i]);
		
		p[i] = &ary[i];
	}
	
	printf("\nCube of all array elements :- \n");
	
	for(i=0 ; i<size ; i++)
	{
		printf("%d, ",(*p[i])*(*p[i])*(*p[i]));
	}
}