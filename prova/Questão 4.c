//usuario apresenta 3 variaveis e tem retorno qual é a maior e menos dentre elas

#include <stdio.h>

int main (void){
	float a,b,c;
	
	printf("Digite o valor 1: ");
	scanf("%f",&a);
		printf("Digite o valor 2: ");
	scanf("%f",&b);
		printf("Digite o valor 3: ");
	scanf("%f",&c);
	
	if((a >= b) && (a >= c) && (b >= c)){
		printf("Maior valor %.2f\n",a);
		printf("Menor valor %.2f",b);
		
	}else 	if((a >= b) && (a >= c) && (b <= c)){
		printf("Maior valor %.2f\n",a);
		printf("Menor valor %.2f",c);
		
	}else 	if((a <= b) && (a >= c) && (b >= c)){
		printf("Maior valor %.2f\n",b);
		printf("Menor valor %.2f",a);
		
	}else 	if((a <= b) && (a <= c) && (b >= c)){
		printf("Maior valor %.2f\n",b);
		printf("Menor valor %.2f",c);
		
	}else 	if((a >= b) && (a <= c) && (b <= c)){
		printf("Maior valor %.2f\n",c);
		printf("Menor valor %.2f",a);
		
	}else 	if((a <= b) && (a <= c) && (b <= c)){
		printf("Maior valor %.2f\n",c);
		printf("Menor valor %.2f",b);
	}
	
	return 0;
}
