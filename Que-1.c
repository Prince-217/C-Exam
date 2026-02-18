#include<stdio.h>

void main()
{
	printf("========Instrctions========");
	printf("\nPress 1 for Addition.");
	printf("\nPress 2 for Substraction.");
	printf("\nPress 3 for Multiplication.");
	printf("\nPress 4 for Division.");
	printf("\nPress 0 for Exit.\n");
		
	int choice;
	float no1, no2;
	
	do
	{
		
		printf("\n\nEnter Your Choice :- ");
		scanf("%d",&choice);
		
		
		switch (choice)
		{
			case(1):
				printf("\nEnter the first number :- ");
				scanf("%f",&no1);
				printf("Enter the second number :- ");
				scanf("%f",&no2);
				printf("\nYour result is :- %.0f",no1+no2);
				break;
				
			case(2):
				printf("\nEnter the first number :- ");
				scanf("%f",&no1);
				printf("Enter the second number :- ");
				scanf("%f",&no2);
				printf("\nYour result is :- %.0f",no1-no2);
				break;
				
			case(3):
				printf("\nEnter the first number :- ");
				scanf("%f",&no1);
				printf("Enter the second number :- ");
				scanf("%f",&no2);
				printf("\nYour result is :- %.0f",no1*no2);
				break;
					
			case(4):	
				printf("\nEnter the first number :- ");
				scanf("%f",&no1);
				printf("Enter the second number :- ");
				scanf("%f",&no2);
				printf("\nYour result is :- %.2f",no1 / no2);
				break;
				
			case(0):
				printf("\nYou are exited...!!");
				break;
			default:
				printf("\nPlease enter valid choice...!!");
				break;	
		}	
	}while(choice != 0);
	
		
	
	
}
