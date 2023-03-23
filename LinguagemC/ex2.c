#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float pi = 3.14159265;
int main(void)
{
  float r;
  float area;

  printf("Digite o valor do raio: \n");
  scanf("%f", &r);
  area = pi * pow(r,2);
  printf("A area da circunferencia eh: %f\n", area);
  return 0;
}
