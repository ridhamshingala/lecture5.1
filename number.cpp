#include<stdio.h.>
main()
{
	int number;
	printf("Enter the number");
	scanf("%d",&number);
	if ( number<0)
	{
      printf("Number is Negative");
	}
	else if (number==0)
	{
	printf("Number is Neutral");
	}
	else if (number>0)
	{
		printf("Number is Positive");
	}
}
