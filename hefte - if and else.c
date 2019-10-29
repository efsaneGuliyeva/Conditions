/*
heftenin gunlerinin istifadeciye else if ile gosterilmesi
*/

#include<stdio.h>

void main()
{
	int gun;
	printf("Heftenin gununu ededle daxil edin: ");
	scanf("%d", &gun);
	
	if(gun == 1)
	{
		printf("Bazar ertesi");
	}
	
	else if(gun == 2)
	{
		printf("Cersenbe axsami");
	}
	
	else if(gun == 3)
	{
		printf("Cersenbe");
	}
	
	else if(gun == 4)
	{
		printf("Cume axsami");
	}
	
	else if(gun == 5)
	{
		printf("Cume");
	}
	
	else if(gun == 6)
	{
		printf("Senbe");
	}
	
	else if(gun==7) {
		printf("Bazar");
	}
	
	else {
		printf("Sehv reqem");
	}
	
}
