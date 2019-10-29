/*Birden cox case ucun eyni sertin daxil edilmesi*/
#include<stdio.h>

void main()
{
	char kart;
	int xal = 0;
	scanf("%c", &kart);
	
	switch(kart)
	{
		/* K, Q, A herflerinin hansinin daxil edilmesinden 
		asili olmayaraq eyni ish gorulmelidir - 10 xal elave edilmelidir
		Bu halda xal = xal+10; printf("%d", xal); kod setrlerini her uc case
		ucun yazmaq evezine sadece sonuncu case ucun bir defe daxil ede 
		bilersiniz. bu halda break emrine qeder olan hisse her uc case ucun de kecerli olur.
		 
		 */
		case 'K': 
		case 'Q': 
		case 'J': xal = xal+10; printf("%d", xal); break; 
		case 'A': xal = xal+11; printf("%d", xal); break;
	}
	
}




