#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
	
	int i,j;
	float nota [4];
	float media;
	
	for( j=0; j < 4; j++ ){
	
	printf("Informe a nota %d: ", j+1);
	scanf("%f", &nota[j]);
	fflush(stdin);
media += nota[j];
}


	printf("\nmedia %.2f: ",media/4);
return 0;
}
