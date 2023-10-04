#include <stdio.h>
#include <stdlib.h>

#define MAX 6


int main(void) {
	float soma,notas[MAX];
	int i;
	
	for(i=0,soma=0.0;i<MAX;soma+=notas[i++]){
		printf("\nNota %d", i+1);
		scanf("%f",&notas[i]);
		printf("\nMedia: %.1f", soma/MAX);
		getch();
	}
}
