#include <stdio.h>


int main (void) {
	int x,y;
	int matriz [5][3]=
	{{1,2,3},
	{4,5,6},
	{7,8,9},
	{10,11,12},
	{13,14,15}};
	printf("\nmatriz:\n\n");
	for(x=0; x<5;x++){
		for(y=0;y<3;y++){
			
			printf(" %d", matriz[x][y]);
			
		}
		printf("\n");
	}
	
	
	return 0;
	
}
