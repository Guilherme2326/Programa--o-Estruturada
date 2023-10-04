#include <stdio.h>
#define SOMA (a+b)
#define SUBTRACAO (a-b)
#define DIVISAO (a/b)
#define MULTIPLICACAO (a*b)
int main(){
int a,b, c;
char op;
printf("Digite o primeiro valor: ");
scanf("%d", &a);
printf("Digite o segundo valor: ");
scanf("%d", &b);
printf("\nsoma = + ");
printf("\nsubtracao = - ");
printf("\ndivisao = / ");
printf("\nmultiplicacao = * \n");
fflush(stdin);
scanf("%c",&op);
switch (op){
	case '+':
	c = SOMA;
	break;
	case '-':
	c = SUBTRACAO;
	break;
	case '/':
	c = DIVISAO;
	break;
	case '*':
	c = MULTIPLICACAO;
	break;
	default:
	printf("ultilizar apenas os simbolos apresentados!!!"); 
}




printf("C = %d",c);



	return 0;
}
