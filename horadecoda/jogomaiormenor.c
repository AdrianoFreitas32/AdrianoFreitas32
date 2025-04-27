#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numerodojogador, numerodocomputador, resultado;
  char tipodecomparacao;

  // gerar numero aleatorio
  srand(time(0));
  numerodocomputador = rand() % 100 + 1; // numero de 1 a 100

    // iniciar o jogo
  printf("** Benvindo ao Jogo Maior, Menor ou Igual **\n");
  printf("Voçe deve escolher um numero e um tipo de comparação\n");
  printf("M. maior\n");
  printf("N. menoe\n");
  printf("I. igual\n");
  printf("Escolha a comparação: ");
  scanf("%c", &tipodecomparacao);

  printf("Digite seu numero (ebtre 1 a 100): ");
  scanf("%d", &numerodojogador);

  // numero do computador
  //printf("O numero do computador é: %d\n", numerodocomputador);

  switch (tipodecomparacao)
  {
  case 'M':
  case 'm':
    printf("Voce escolheu a opção maior!\n");
    resultado = numerodojogador > numerodocomputador ? 1 : 0;
    
    break;
    case 'N':
    case 'n':
    printf("Voce escolheu a opção menor!\n");
    resultado = numerodojogador < numerodocomputador ? 1 : 0;
    break;
    case 'I':
    case 'i':
    printf("Voce escolheu a opção igual!\n");
    resultado = numerodojogador == numerodocomputador ? 1 : 0;
    break;
  default:
  printf("Opção do jogo invalida!\n");
    break;
  }
  printf("O numero do computador é: %d e o numero do jojador é: %d\n", numerodocomputador, numerodojogador);
  if (resultado == 1)
  {
    printf("Parabens, Voce Venceu!\n");
  } else
  {
    printf("Infelimente, Voce Perdeu!\n");
  }
  
  
  
  return 0;
}