#include<stdio.h>
main()
{
	int i,f=1,num;
	printf("Input the number:");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	f=f*i;
	printf("Enter a Factorial of%d is: %d\n",num,f);
}
