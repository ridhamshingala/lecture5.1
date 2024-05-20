#include<stdio.h>
main()
{
	int first,second,i,sum,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("the fibanacci series is: \n");
    printf("%d%d",first,second);
    for(i=3;i<=n;i++)
	{
		sum = first + second;
		printf("%d",sum);
		first=second;
		second=sum;
		
	}
}
