#include <stdio.h>

int main (void) {
	
	int a,b,c;
	
	printf("digite o primeiro valor: \n");
	scanf("%d",&a);
		printf("digite o segundo valor: \n");
	scanf("%d",&b);
		printf("digite o terceiro valor: \n");
	scanf("%d",&c);
	
	
	if((a >= b) && (a>= c) && (b>= c)){
		printf(" %d",a);
		printf(" %d",b);
		printf(" %d",c);
	} else if((a >= b) && (a>= c) && (b<= c)){
		printf(" %d",a);
		printf(" %d",c);
		printf(" %d",b);
	} else if((a >= b) && (a<= c) && (b<= c)){
	
		printf(" %d",c);
		printf(" %d",a);
		printf(" %d",b);
	} else if((a <= b) && (a<= c) && (b<= c)){
		printf(" %d",c);
		printf(" %d",b);
		printf(" %d",a);
	} else if((a <= b) && (a<= c) && (b>= c)){
		printf(" %d",b);
		printf(" %d",c);
		printf(" %d",a);
	}else if((a <= b) && (a>= c) && (b>= c)){
		printf(" %d",b);
		printf(" %d",a);
		printf(" %d",c);
	}
	return 0;
	
}
