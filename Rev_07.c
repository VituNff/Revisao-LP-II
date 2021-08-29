#include <stdio.h>

//  Um agrônomo deseja estudar o regime de chuvas numa fazenda da microrregião  cacaueira no sul da Bahia durante 365 dias. Para isto, instalou um pluviômetro nesta  fazenda que mede a quantidade de chuva (em milímetros por dia).  

//Escreva um programa que leia a quantidade de chuva registrada pelo pluviômetro por dia durante um ano e imprima: 

//a. O dia do ano que registrou a menor quantidade de chuva; 

//b. O dia do ano que registrou a maior quantidade de chuva; 

//c. A quantidade de chuva anual. 

//d. O número de dias no ano em que quantidade de chuva foi inferior a média  anual. 

int main(void) {

  int dias = 365;
  int chuva[dias];
  int s = 0, abaixo = 0;
  int i=0;
  int menor = 99999, maior = 0;
  int menorDia = 0, maiorDia = 0;
  float m;

  printf("Este programa recebe a quantidade de chuva em mm de %d dias. O programa retorna o dia com menor número de chuva, o dia com maior número de chuva, a quantidade de chuva anual e o número de dias do ano em que a quantidade de chuva foi inferior a média anual.\n", dias);


  // Receber os dados
  while(i < dias) {

    printf("\nInsira a qtd de chuva -> \t");
    
    scanf("%d", &chuva[i]);
    s = s + chuva[i];
    // qtd de chuva total ( c )
    if( i == 0 ) {
      menor = chuva[i];
      maior = chuva[i];
    }
    
    if( chuva[i] > maior ){
      maior = chuva[i];
      maiorDia = i;
    } // maior chuva ( b )

    if( chuva[i] < menor ){
      menor = chuva[i];
      menorDia = i;
    } // menor chuva ( a )

    i++;
  }

  // Cálculo da média
  m = s/dias;

  //Verifica dias abaixo da média ( d )
  for( i = 0; i < dias ; i++) {
    if ( chuva[i] < m ) {
      abaixo++;
    }
  }

  printf ("\n a. O dia do ano que registrou a menor quantidade de chuva foi o %dº dia registrado, com %d mm de chuva.\n", menorDia+1, menor);

  printf("\n b. O dia do ano que registrou a maior quantidade de chuva foi o %dº dia registrado, com %d mm de chuva.\n", maiorDia+1, maior);

  printf("\n c. A quantidade de chuva anual foi de %d mm.\n", s);

  printf("\n d. O número de dias do ano em que a chuva foi menor que a média anual foi %d.\n", abaixo);


  return 0;
}
