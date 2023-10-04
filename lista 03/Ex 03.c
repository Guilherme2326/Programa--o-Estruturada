#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char objeto1[30],objeto2[30],objeto3[30],objeto4[30],objeto5[30];
	
	
	printf("\nDigite o primeiro objeto: ");
	gets(objeto1);
	
	printf("\nDigite o segundo objeto: ");
	gets(objeto2);
	
	printf("\nDigite o terceiro objeto: ");
	gets(objeto3);
	
	printf("\nDigite o quarto objeto: ");
	gets(objeto4);
	
	printf("\nDigite o quinto objeto: ");
	gets(objeto5);
	
	if(strcmp(objeto1,objeto2)==0){
		
		printf("find");
	}else if(strcmp(objeto1,objeto3)==0){
		printf("find");
	}else if(strcmp(objeto1,objeto4)==0){
		
		printf("find");
	}else 	if(strcmp(objeto1,objeto5)==0){
		
		printf("find");
	}else 	if(strcmp(objeto2,objeto3)==0){
		
		printf("find");
	}else 	if(strcmp(objeto2,objeto4)==0){
		
		printf("find");
	}else	if(strcmp(objeto2,objeto5)==0){
		
		printf("find");
	}else	if(strcmp(objeto3,objeto4)==0){
		
		printf("find");
	}else	if(strcmp(objeto3,objeto5)==0){
		
		printf("find");
	}else	if(strcmp(objeto4,objeto5)==0){
		printf("Find");
}
	
	
	return 0;
}
