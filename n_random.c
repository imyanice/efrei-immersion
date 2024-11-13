#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int nombre_mystere = rand() % 100 + 1;
  int nombre_devine;

  int compteur = 0;
  while (nombre_devine != nombre_mystere) {
    compteur++;
    printf("Input guessesd number: ");
    scanf("%d", &nombre_devine);

    if (nombre_devine > nombre_mystere) {
      printf("Trop grand!\n");
    } else if (nombre_devine < nombre_mystere){
      printf("Trop petit!\n");
    }
  }

  printf("Bravo! Le nombre à deviner était %d!\nVous avez trouvé en %d attempts.", nombre_mystere, compteur);
}
