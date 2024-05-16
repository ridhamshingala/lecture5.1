#include<stdio.h>
main()
{
	int units;
	float amt,sercharge,totalamt;
	printf("Enter electricity units");
	scanf("%d",& units);
	if(units<=50)
   	{
		amt = units *.50;
	}
	else if(units<=150)
	{
		amt = 25+((units-50)*0.75); 
	}
	else if(units<=250)
	{
		amt = 100+((units-150)*1.20);
	}
	else
	{
		amt=220+((units-250)*1.50);
	}
	sercharge = amt *.20;
	totalamt = amt + sercharge;
	printf("Electricity Bill = Rs.%2f",totalamt);
}
