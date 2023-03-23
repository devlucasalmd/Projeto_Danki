#include <stdio.h>

int main(void)
{
  float c, f;

  printf("Digite a temperatura em Celsius para ser apresentada como Farenheit\n");
  scanf("%f", &c);
  f = c * 9/5 + 32;
  printf("O valor em Fahrenheit eh: %.2f\n", f);
  return 0;     
}
