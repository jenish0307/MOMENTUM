#include<stdio.h>
main()
{
	int unit,amt,extra_charge,total_amt;
	
	printf("enter consumed total unit :- ");
	scanf("%d",&unit);
	
	if(unit<=50)
	{
		amt = unit*0.5;
		
	}
	else if (unit<=150)
	{
		amt = ((unit-50) * 0.75) +25;
	}
	else if (unit<=250)
	{
		amt = ((unit-150) * 1.20) +100;
	}
	else
	{

		amt = ((unit-250) * 1.50)+220;
	}
	
	extra_charge = amt * 0.20;
	total_amt = amt + extra_charge;
	
	printf("electrycity bill = Rs. %d",total_amt);
}
	