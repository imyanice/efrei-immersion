#include <stdio.h>

int main() {
  int n;
  int nn;
  printf("Premier nombre: ");
  scanf("%d", &n);
  printf("Second nombre: ");
  scanf("%d", &nn);
  if (nn > n) {
    printf("Le second nombre est plus grand!");
  } else if (nn == n) {
    printf("Les deux nombres sont égaux.");
  } else {
    printf("Le second nombre est plus petit!");
  }
}
