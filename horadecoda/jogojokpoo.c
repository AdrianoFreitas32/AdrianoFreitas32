
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int escolhadojogador, escolhadocomputador;
  srand(time(0));

  printf("**** jogo de jokempó ****\n");
  printf("Escolha uma opção: \n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha: ");
  scanf("%d", &escolhadojogador);

  escolhadocomputador = rand() % 3 +1;

  switch (escolhadojogador)
  {
  case 1:
  printf("Jogador: Pedra\n");
    break;
    case 2:
    printf("Jogador: Papel\n");
      break;
      case 3:
  printf("Jogador: Tesoura\n");
    break;
  default:
  printf("Opção invalida\n");
    break;
  }
  switch (escolhadocomputador)
  {
  case 1:
  printf("Computador: Pedra\n");
    break;
    case 2:
    printf("Computador: Papel\n");
      break;
      case 3:
  printf("Computador: Tesoura\n");
    break;
  }
    if (escolhadojogador == escolhadocomputador)
    {
      printf(" **** Jogo enpatou! ****\n");
    } else if ((escolhadojogador == 1) && (escolhadocomputador == 3) ||
              (escolhadojogador == 2) && (escolhadocomputador == 1) ||
              (escolhadojogador == 3) && (escolhadocomputador == 2))
    {
      printf("### Parabens, você ganhou! ###\n");
    } else {
      printf("### Você perdeu! ###\n");
    }


 return 0;
}