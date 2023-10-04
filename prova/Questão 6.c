#include <stdio.h>


int main (void) {
	int x,y,media;
	int matriz [4][4]=
	 
	{{45,32,83,95},
	{26,14,37,42},
	{40,43,65,77},
	{74,79,48,55}};
	printf("\nmatriz:\n\n");
	for(x=0; x<4;x++){
		for(y=0;y<4;y++){
			
			printf(" %d", matriz[x][y]);
			media += matriz[x][y];
		}
		printf("\n");
	}
	
	printf("media:  %d", media/16);
	return 0;
	
}
