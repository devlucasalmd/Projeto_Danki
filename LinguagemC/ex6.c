#include <stdio.h>

int main(void)
{
   float f, c;

   printf("Digite o valor da temperatura em Fahrenheit para ser transformado em Celsius\n");
   scanf("%f", &f);

   c = ((f-32) * 5)/9;
   printf("A temperatura em Celsius eh: %.2f\n", c);

   return 0;
}
