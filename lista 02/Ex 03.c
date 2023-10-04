#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
	
	int i,j;
	float nota [4][4];
	float media;
	
	for( i=0; i < 4; i++ ){
	for( j=0; j < 4; j++ ){
	
	printf("Informe a nota %d: ", j+1);
	scanf("%f", &nota[i][j]);
	fflush(stdin);
}
}


for( i=0; i < 4; i++ ){
	for( j=0; j < 1; j++ ){
	
	media = (nota[i][j] + nota[i][j+1] + nota[i][j+2] + nota[i][j+3]) / 4;
	printf("\nmedia %.2f: ", media);
	
    	if(media >= 7.0) {
    		printf("\nAprovado ");
    		
		} else if(media <= 3.0){
			printf("\nReprovado ");
		} else if((media < 7.0) && (media > 3)){
			printf("\nRecuperacao");
		}

}
}
return 0;
}
