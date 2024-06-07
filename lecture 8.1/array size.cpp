#include<stdio.h>
main()
{
	int n;
	printf("Enter array size");
	scanf("%d",&n);
	int a[n],i,sum=0,average;
	printf("Emter array element:");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	average = sum / n;
	printf("Average sum of array :%.2d/n",average);
}
