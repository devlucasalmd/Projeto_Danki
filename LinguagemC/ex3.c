#include <stdio.h>


int main(void)
{
  int ht;
  float vh, pd, td, sb, sl;
  
  printf("Digite a quantidade de horas trabalhadas no mês: \n");
  scanf("%d", &ht);
  
  printf("Digite o valor da hora trabalhada: \n");
  scanf("%f", &vh);
  
  printf("Digite o percentual de desconto: \n");
  scanf("%f", &pd);

  sb = ht * vh;
  td = (pd/100) * sb;
  sl = sb - td;
  
  printf("Seu salario bruto eh: %.2f\n", sb);
  printf("Seu salario liquido eh: %.2f\n", sl);
  
  return 0;
}

