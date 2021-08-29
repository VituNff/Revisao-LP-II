#include <stdio.h>

int main(void) {
  
  // Escreva um programa para calcular a média aritmética de uma lista de números  positivos. Considere que o comprimento da lista não é conhecido, em vez disso, o  programa deverá ler números continuadamente até que o usuário digite o número - 1313. 

  int n;
  int s = 0;
  int i = -1;


  printf("Este programa calcula a média aritmética de uma lista de números positivos até que o usuário digite 1313.\nPor favor, insira os números abaixo:\n");

  while(1) {
    i++;

    scanf("%d",&n);
    
    if(n == 1313) {
      break;
    }
    else {
    s = s + n;
    }
  }

  float m = (s/i);
  printf("A média aritmética dos números fornecidos é igual a %f\n", m);
  printf("\n ----- Programa encerrado. ----- \n");

  return 0;
}