#include <stdio.h>

int main (void){
	char nome[40];
	gets(nome);
	puts("ola, ");
	puts(nome);
	puts("Puts sempre salta uma linha. ");
	puts(&nome[4]);
	
	
 return 0;
	
}
