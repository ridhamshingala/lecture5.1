#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
	printf("Enter value D:");
	scanf("%d",&d);
	
if (a>b)
	 {
		if(a>c)
		{
			printf("A is max");
			
		}
		else
		{
			printf("C is max");
		}
	 }
	 else
	   
	    
	    {
	    	
	    	if(a>d)
	    	{
	    		printf("A is max");
			}
			else
			{
				printf(" D is max");
			}
			if (a>b)
			{
				printf("A is max");
			}
			else
			{
				printf("B is max");
			}
     	}
     	
		
}
