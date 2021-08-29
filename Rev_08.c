#include <stdio.h>

int main(void) {

  int dia;
  int mes;
  int ano;
  int bissexto = 0;

  printf("Este programa verifica a validade de uma data recebida apenas em números inteiros positivos.\n");
  printf("\nInsira o dia -> \t");
  scanf("%d", &dia);
  printf("\nInsira o mes -> \t");
  scanf("%d", &mes);
  printf("\nInsira o ano -> \t");
  scanf("%d", &ano);

  //// Checagem de ano bissexto //////
  if (ano % 400 == 0) {
    bissexto = 1;
  }
  else if (ano % 100 == 0) {
    bissexto = 0;
  }
  else if (ano % 4 == 0) {
    bissexto = 1;
  }
  else {
    bissexto = 0;
  }
  //// Fim da Checagem de ano bissexto

  if(dia > 31 || dia < 0) {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
  }
  else if(mes > 12 || mes < 0) {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
  }
  else if(ano < 0){
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
  }
  else if( bissexto == 1 && mes == 2 && dia > 29) {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
  }
  else if( bissexto == 0 && mes == 2 && dia > 28) {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
  }
  
  if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
    if (dia <= 31) {
    printf("%d/%d/%d é uma data válida.\n", dia, mes, ano);
    }
    else {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
    }
  }

  else {

    if ( mes == 2 && bissexto == 1 && dia <= 29) {
      printf("%d/%d/%d é uma data válida.\n", dia, mes, ano);
    }

    else if ( mes == 2 && bissexto == 0 && dia <= 28) {
      printf("%d/%d/%d é uma data válida.\n", dia, mes, ano);
    }

    else if (dia <= 30) {
    printf("%d/%d/%d é uma data válida.\n", dia, mes, ano);
    }
    else {
    printf("\nData inválida.\n");
    printf("Programa encerrado.\n");
    return 0;
    }
  }

    printf("Programa encerrado.\n");

    return 0;
}