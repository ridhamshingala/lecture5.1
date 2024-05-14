#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter value A:");
	scanf("%d",&a);
	printf("Enter value B:");
	scanf("%d",&b);
	printf("Enter value C:");
	scanf("%d",&c);
	if (a<b)
	 {
		if(a<c)
		{
			printf("A is minum");
			
		}
		else
		{
			printf("C is minum");
		}
	 }
	 else
	   
	    
	    {
	    	
	    	if(b<c)
	    	{
	    		printf("B is minum");
			}
			else
			{
				printf("C is minum");
			}
     	}
		
	    
}
