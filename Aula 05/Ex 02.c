#include <stdio.h>

int main (void) {
	char l1,l2;
	
	printf("Insira um caractere: ");
	scanf("%c", &l1);
	fflush(stdin);
	//fpurge(stdin);
	
	printf("Insira outro caractere: ");
	scanf("%c",&l2);
	
	printf("Voce digitou %c, %c",l1,l2);
	
	
	
	
	
	return 0;
}
