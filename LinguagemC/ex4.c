#include <stdio.h>

int main(void)
{
  char nome[20];
  char sexo;

  printf("Digite seu nome:\n");
  scanf("%s", nome);
  
  printf("Digite seu sexo: [M] para Homem e [F] para Mulher\n");
  scanf("%s", sexo);
  
  printf("Seu nome eh: %s\ne seu sexo eh: %s\n", nome, sexo);
  return 0;
}
