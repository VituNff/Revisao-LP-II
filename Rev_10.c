#include <stdio.h>
#include <math.h>

int main(void) {

  printf("Este programa recebe o conteúdo de uma matriz quadrada e imprime sua diagonal principal. A matriz deve possuir no máximo 20x20 valores.\n");
  printf("Insira toda a matriz em uma única linha, separada por espaços entre os números e tecle 'Enter'.\n");

	int i,valores[20];
  int raiz;
  char teste;

  do{
  	scanf("%d%c", &valores[i], &teste); 
	  i++; 
	} while(teste!= '\n');

  raiz = sqrt(i);

  printf("A Diagonal Principal da Matriz Quadrada %dx%d informada é:\n", raiz,raiz);

  for( int j = 0; j < raiz; j++){
    printf("%d ",valores[(j*(raiz+1))]);
  }

  return 0;
}