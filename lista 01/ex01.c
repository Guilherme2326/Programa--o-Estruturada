		#include <stdio.h>
		#include <stdlib.h>
		
		/* run this program using the console pauser or add your own getch, system("pause") or input loop */
		
		int main(void) {
			float a,b,c;
			
			printf("Digite o primeiro valor: \n");
			scanf("%f",&a);
			
				printf("Digite o segundo valor: \n");
			scanf("%f",&b);
			
				printf("Digite o terceiro valor: \n");
			scanf("%f",&c);
			
			
			if((a >= b ) && (a >= c)){
				printf("maior valor %.2f\n",a);
			}
			 else if((b >= a) && (b >= c)){
				printf("maior valor %.2f\n",b);
			} else 
				printf("maior valor %.2f\n",c);
		
		
			if((a <= b ) && (a <= c)){
				printf("menor valor %.2f",a);
			}
			 else  if((b <= a) && (b <= c)){
				printf("menor valor %.2f\n",b);
			} else if ((c <= a) && (c <= b)){
				printf("menor valor %.2f\n",c);
			}
				
	
		return 0;
	}
