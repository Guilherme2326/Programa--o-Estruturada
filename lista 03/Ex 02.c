#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char nome1[40], nome2[40], continuar;
	int i;
	
	do{
	
	printf("\nDigite o primeiro nome: ");
	gets(nome1);
	
	printf("\nDigite o segundo nome: ");
	gets(nome2);
	
	for( i = 0; nome1[i] && nome2[i] != 0; i++){
		
		nome1[i] = toupper(nome1[i]);
		nome2[i] = tolower(nome2[i]);
	}
	
	printf("primeiro nome: %s\n", nome1);
	printf("\nsegundo  nome: %s", nome2);
	printf("\nDeseja realizar outra operacao S ou N: ");
	scanf("%c",&continuar);
	printf("%c", continuar);
	fflush(stdin);
}while(continuar == 'S');
	return 0;
}
