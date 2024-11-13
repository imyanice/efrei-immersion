#include <stdio.h>

int main () {
  int continuer = 1;
  while (continuer == 1) {
    printf("Voules vous continuer?\n1=oui/0=non: ");
    scanf("%d", &continuer);
  }
  printf("Au revoir!");
  return 0;
}
