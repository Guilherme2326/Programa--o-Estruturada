#include<stdio.h>

long fatoral(int n);

int main(){
	int num = 1;
	while(num){
		printf("\nDigite um numero entre 30 a 33: ");
		scanf("%d", &num);
		
		if(num >= 30 && num <= 33){
		
		printf("Fatoral = %ld", fatoral(num));
	}
	}
	getch();
}

long fatoral (int n){
	if(n == 0) return (1);
	else 
	return (fatoral(n-1)* n);
	
}

