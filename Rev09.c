#include <stdio.h>

int main(void) {

  printf("Este programa recebe um número inteiro e divide por 2 até que o resultado seja 0, imprimindo o resto de cada divisão.\n");

  int n;

  printf("Insira o número ->\t\n");
  scanf("%d", &n);

  while(n > 0) {
    printf("%d/2 = %d\n", n, n/2);
    printf("Resto: %d\n", (n%2));
    n = n/2;
  }
    return 0;
}