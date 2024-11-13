#include <stdio.h>

int main () {
  int n;
  int nn;
  printf("Rentre un premier nombre: ");
  scanf("%d", &n);
  printf("Rentre un second nombre: ");
  scanf("%d", &nn);
  int b = n + nn;
  printf("La somme de %d et de %d est %d", n, nn, b);
}
