#include <stdio.h>

int main(void)
{
  int a;
  int b;
  int x;

  printf("Digite o valor de A\n");
  scanf("%d", &a);

  printf("Digite o valor de B\n");
  scanf("%d", &b);
  x = a + b;
  printf("A soma dos valores digitado eh: %d\n", x);
  return 0; 
}

