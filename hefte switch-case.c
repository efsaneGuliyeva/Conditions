/*switc-case ie heftenin gunlerinin istifadeciye gosterilmesi*/

#include<stdio.h>

void main()
{
	int gun;

	scanf("%d", &gun);
	
	switch(gun)
	{
		case 1: printf("Bazar ertesi"); break;
		case 2: printf("Cersenbe axsami"); break;
		case 3: printf("Cersenbe"); break;
		case 4: printf("Cume axsami"); break;
		case 5: printf("Cume"); break;
		case 6: printf("Senbe"); break;
		case 7: printf("Bazar"); break;
		default: printf("Bele gun movcud deyil");
	}
	
}
