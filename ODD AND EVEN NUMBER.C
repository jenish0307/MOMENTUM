#include<stdio.h>
main()
{
	int a;
	
	printf("ENTER NUMBER :- ");
	scanf("%d",&a);
	
	(a%2==0)  ?  printf("NUMBER IS EVEN") : printf("NUMBER IS ODD");
}