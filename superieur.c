#include <stdio.h>

int main () {
  int n;
  printf("Rentre un nombre: ")
  scanf("%d", &n);
  if (n > 10) {
    printf("%d est plus grand que 10!\n", n);
  } else {
    printf("%d est inférieur à 10!\n", n);
  }
}
