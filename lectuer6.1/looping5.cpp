#include<stdio.h>
main()
{
	int first_number,second_number;
     {
     	 printf("Enter a first number: ");
     scanf("%d",&first_number);
     printf("Enter a first number ");
     scanf("%d",&second_number);
	 }
	while(first_number <= second_number)
	{
		if(first_number%4==0)
		{
		printf("%d\n",first_number);	
		}
		first_number ++;
	}
}
