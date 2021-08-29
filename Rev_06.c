#include <stdio.h>

int main(void) {

  // Escreva um programa que leia a nota dos 35 alunos da disciplina Programação II,  calcule a média, e imprima o número de alunos que tiveram nota inferior à média.

  int alunos = 35;
  int n[alunos];
  int s = 0, abaixo = 0;
  int i=0, j=0;
  float m;

  printf("Este programa recebe a nota de %d alunos e calcula sua média, informando o número de alunos inferiores a média da turma.\n", alunos);

  while(i < alunos) {

    printf("Insira a nota do aluno -> \t");
    
    scanf("%d", &n[i]);
    s = s + n[i];

    i++;
  }

  m = s/alunos;

  for( i = 0; i < alunos ; i++) {
    if ( n[i] < m ) {
      abaixo++;
    }
  }

  printf("\n%d alunos ficaram abaixo da média da turma.\n", abaixo);

  printf("\n ----- Programa encerrado ----- \n");


  return 0;
}