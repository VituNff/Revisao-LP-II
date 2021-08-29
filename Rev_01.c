#include <stdio.h>

int main(void) {
  
  // Faça um programa para calcular a área e o volume de uma esfera. Use as seguintes fórmulas:
  // A= 4*pi*r^2 V = 4*pi*r^3
  // Teste: Calcule A e V usando os seguintes valores para o raio: 7, 13.1 e 0.3.

  float r;
  float A;
  float V;
  float pi = 3.1415;

  printf("Este programa calcula a área e o volume de uma esfera. Digite 0 para encerrar o programa.\n");
  
  printf("\nExemplo:\n");

  
  printf("\n--- Esfera de raio 7 ---\n");
  r = 7;

  A = 4 * pi * (r*r);
  V = 4* pi * (r*r*r);
  
  printf("\nÁrea da Esfera de Raio %.1f: %.3f\n", r, A);
  printf("\nVolume da Esfera de Raio %.1f: %.3f\n", r, V);

  printf("\n--- Esfera de raio 13.1 ---\n");
  r = 13.1;

  A = 4 * pi * (r*r);
  V = 4* pi * (r*r*r);
  
  printf("\nÁrea da Esfera de Raio %.1f: %.3f\n", r, A);
  printf("\nVolume da Esfera de Raio %.1f: %.3f\n", r, V);

  printf("\n--- Esfera de raio 0.3 ---\n");
  r = 0.3;

  A = 4 * pi * (r*r);
  V = 4* pi * (r*r*r);
  
  printf("\nÁrea da Esfera de Raio %.1f: %.3f\n", r, A);
  printf("\nVolume da Esfera de Raio %.1f: %.3f\n", r, V);

  while (1) {

      printf("\nPor favor, insira o raio para cálculo : \t");
      scanf("%f", &r);

      if( r == 0) {
        break;
      }
      else {
        A = 4 * pi * (r*r);
        V = 4* pi * (r*r*r);
      }
      printf("\nÁrea da Esfera de Raio %.1f: %.3f\n", r, A);
      printf("\nVolume da Esfera de Raio %.1f: %.3f\n", r, V);
  }

  printf("Programa encerrado.");

  return 0;
}