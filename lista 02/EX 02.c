#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main (void) {
	
	int x,y,i,j;
	float preco [4][1];
	char nome[4][20];
	
	
	for( i=0; i < 4; i++ ){
	for( j=0; j < 1; j++ ){
	
	printf("Informe o nome: ");
	scanf("%s",nome[i]);
	fflush(stdin);
	printf("Informe a preço: ");
	scanf("%f", &preco[i][j]);
	fflush(stdin);
	
}
}


for( i=0; i < 4; i++ ){
	for( j=0; j < 1; j++ ){
	
	printf("\nnome %s", nome[i]);
	

	
	printf("\npreco %.2f",(preco[i][j] * 5) / 100 + preco[i][j]) ;

}
}
return 0;
}
