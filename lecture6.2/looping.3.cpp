#include<stdio.h>
main()
{
	int a=1,n;
     {
     	printf("Enter a number=", n);
     scanf("%d",&n);
	 }
	do
	{
		if(a%2==0)
		{
		printf("%d\n",a);	
		}
		a++;
	}while(a<=n);
}
