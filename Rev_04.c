#include <stdio.h>

int main(void) {
  
  // Considerando um programa iniciado pelas instruções: 
  // a = 1; b = 2; c = 3; 
  // Complete-o de modo que, ao final do programa, o conteúdo de A seja 3, de B seja 1 e de  C seja 2. Use apenas atribuições entre variáveis. 

  int a = 1;
  int b = 2;
  int c = 3;

  // Objetivo: A = 3 , B = 1 e C = 2
  // A = C || B = A || C = B

  int bfr;

  bfr = a;
  a = c;
  c = b;
  b = bfr;

  printf("A = %d\nB = %d\nC = %d\n", a, b, c);


  return 0;
}