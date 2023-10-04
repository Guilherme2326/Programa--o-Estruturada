#include<stdio.h>

int operacao();

int main(){
	int a, *p, resultado;
	printf("Digite um valor: ");
	scanf("%d",&a);
	p = &a;
	resultado = operacao(*p);
	
	
	printf("resultado : %d", resultado);

return 0;
}


int operacao (int *p){
	int b;
	
	b = p;
	
	b = b * 0.15;
	return b;
}
