#include<stdio.h>

long fatoral(int n);

int main(){
	int num = 1;
	while(num){
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		printf("Fatoral = %ld", fatoral(num));
	
	}
	getch();
}

long fatoral (int n){
	if(n == 0) return (1);
	else 
	return (fatoral(n-1)* n);
	
}

