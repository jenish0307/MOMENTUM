#include<stdio.h>
main()
{
	char month;
	printf("ENTER S FOR SUNDAY\n"),
	printf("ENTER M FOR MONDAY\n"),
	printf("ENTER T FOR TUESDAY\n"),
	printf("ENTER W FOR WENDESDAY\n"),
	printf("ENTER t FOR THURSDAY\n"),
	printf("ENTER F FOR FRIDAY\n"),
	printf("ENTER s FOR SATURDAY\n\n\n\n"),
	
	printf("ENTER WEEK FIRST LETTER :- ");
	scanf("%c",&month);
	
	switch(month)
	{
		case 'S'  : 
		printf("SUNDAY");
		break;
		
		case 'M'  : 
		printf("MONDAY");
		break;
		
		case 'T'  : 
		printf("TUESDAY");
		break;
		
		case 'W'  : 
		printf("WENDESDAY");
		break;
		
		case 't'  : 
		printf("THURSDAY");
		break;
		
		case 'F'  : 
		printf("FRIDAY");
		break;
		
		case 's'  : 
		printf("SATURDAY");
		break;
		
		default:printf("PLZ ENTER THE VALID LETTER OF MONTH ");
		
	}
	
	
}