#include <stdio.h>
#include <stdlib.h>

int main(void){
	int v1,v2,*p;
	v1=30;
	p=&v1;
	printf("O valor de p%d ",p);
	v2=*p;
	printf("O valor de p%d ",v2);
	*p=50;
	printf("O valor de p%d ",p);
	
	}
