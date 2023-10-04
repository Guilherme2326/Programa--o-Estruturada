#include <stdio.h>
#include <conio.h>
#include <string.h>
int main (void) {
	char usuario [4][20];
	int idade [1][4];
	int i, j;
	 
	 for (i=0;i<=2;i++){
	 	for(j=0;j<4;j++){
	 		printf("digite o nome: ");
	 		scanf("%20[^\n]",usuario[i]);
	 		fflush(stdin);
	 		printf("digite a idade: ");
	 		scanf("%d",&idade[i][j] );
	 		fflush(stdin);
		 }
		 	printf("\n nome: %s ",usuario[i][j]);
	 	
	 		printf("\n idade: %d",idade[i][j]);
	 }
	 
	 	 for (i=0;i<1;i++){
	 	for(j=0;j<4;j++){
	 		printf("\n nome: %s ",usuario[i][j]);
	 	
	 		printf("\n idade: %d",idade[i][j]);
	 		printf("\n\n");
		 }
	 }
	 
	return 0;
}
