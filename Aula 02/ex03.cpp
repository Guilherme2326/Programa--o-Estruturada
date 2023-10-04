#include <stdio.h>
#include <stdlib.h>
int main(void) {
	const int linha = 4;//qtde.linhas
	const int coluna = 2;//qtde.coluna
	int x,y; int mat[linha][coluna];
	
	/*Calculando a matriz*/
	
	for (x=0;x<linha;x++){
	
	for (y=0;y<coluna;y++)
	mat[x][y]=(x*2)+(y*3);
	printf("Apresent a MAtriz\n\n");
}
	
	/*Apresentando os elementos*/
	for (x=0;x<linha;x++) {
		for (y=0;y<coluna;y++)
		
		printf("%4d",mat[x][y]);
		printf("\n\n");
	
		
		
	}
	getch();
}
