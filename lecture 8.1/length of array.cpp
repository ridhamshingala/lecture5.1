#include<stdio.h>
main()
{
 int n;
 printf("Enter the number of array:");
 scanf("%d",&n);
 int a[n],i;
 printf("Enter Value in Array /n");
 for(i=0;i<n;i++)
    { 
  	 printf("a[%d]=",i);
  	 scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		printf("A =%d",a[i]);
	}
}
