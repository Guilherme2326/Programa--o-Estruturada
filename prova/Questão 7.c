//apresentar as compras de frutas efetuadas por um usuario 1=> Abacaxi, 2=>maça, 3=>pera

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int num;
	printf("digite quais a compras efetuadas: \n");
	printf(" 1 \n");
	printf(" 2 \n");
	printf(" 3 \n");
	
	scanf("%d",&num);
	
	 switch(num){
	 	case 1:
	 	printf(" 1 => ABACAXI ");
	 	break;
	 	
	 	case 2:
	 	printf(" 2 => MAÇA ");	
	 	break;
	 	
	 	case 3:
	 	printf(" 3 => PERA");
	 	break;
	 }
	return 0;
}
