#include<stdio.h>
main()
{
	int n,i,sum=0;
	printf("Enter a posite number :");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		sum += i;
		printf("sum =%d\n",sum);
	}
}
