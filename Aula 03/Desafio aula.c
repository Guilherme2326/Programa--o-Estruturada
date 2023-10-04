#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
	
	int x,y,i,j;
	float nota [1][1];
	string nome[1][1];
	
	
	for( i=0; i < 1; i++ ){
	for( j=0; j < 1; j++ ){
	
	printf("Digite a matricula: ");
	scanf("%s", &nome[i][j]);
	fflush(stdin);
	printf("Informe o nome: ");
	scanf("%s", &nome[i][j+1]);
	fflush(stdin);
	printf("Informe a nota 1: ");
	scanf("%f", &nota[i][j]);
	fflush(stdin);
	printf("Informe a nota 2: ");
	scanf("%f", &nota[i][j+1]);
	fflush(stdin);
}
}


for( i=0; i < 1; i++ ){
	for( j=0; j < 1; j++ ){
	
	printf("Digite a matricula: %s", nome[i][j]);
	
	printf("Informe o nome: %s", nome[i][j+1]);

	
	printf("Informe a nota 1: %f", nota[i][j]);

	
	printf("Informe a nota 2: %f",nota[i][j+1]);

}
}
return 0;
}
