#include <stdio.h>

int main(void) {
int i,vetor[2], result;
  char op;
for(i==0;i<=1;i++){
  printf("Digite o o numero desejado\n");
  fflush (stdin);
  scanf("%d",&vetor[i]);
  
  }

  
  printf("/\n");
  printf("*\n");
  printf("+\n");
  printf("-\n");
  
  printf("\nselecione o operador matematico\n");
  fflush (stdin);
scanf("%c", &op);
  if(op ==  '/'){
    result = vetor[0] / vetor[1];
  } else if(op == '*'){
    result = vetor[0] * vetor[1];
  } else if (op == '+'){
    result = vetor[0] + vetor[1];
    } else if(op == '-'){
    result = vetor[0] - vetor[1];
    } else printf("operador no computado");

  printf("resultado: %d", result);
  return 0;
}
