#include <stdio.h>

int main() {
  int n1, n2;

  printf("informe o 1ª e 2ª valor a somar: ");
  scanf("%i %i", &n1, &n2);

  printf("A soma de %i + %i = %i", n1, n2, (n1+n2));
  return 0;
}
