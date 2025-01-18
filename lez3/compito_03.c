#include <stdio.h>
#include <string.h>

#define nome "Irene"
#define cognome "Vallan"
#define somma(x, y) x + y
#define sott(x, y) x - y
#define molt(x, y) x *y
#define div(x, y) x / y
#define modulo(x, y) x % y

int main() {
  printf("Buongiorno, sono %s %s.\n\n", nome, cognome);

  printf("Inserire il primo numero:\t");
  int x;
  scanf("%d", &x);
  printf("Inserire il secondo numero:\t");
  int y;
  scanf("%d", &y);

  printf("\nLa somma è: %d + %d = %d\n", x, y, somma(x, y));
  printf("La sottrazione è: %d - %d = %d\n", x, y, sott(x, y));
  printf("Il prodotto è: %d * %d = %d\n", x, y, molt(x, y));
  printf("Il modulo è: %d %% %d = %d\n", x, y, modulo(x, y));

  float h = x, k = y;
  printf("La divisione è: %6.2f : %6.2f = %6.2f\n", h, k, div(h, k));

  printf("Esempio di calcolo complesso: (((%6.2f + %6.2f) * %6.2f) - %6.2f) / "
         "%6.2f = %6.2f",
         h, k, h, k, h, div(sott(molt(somma(h, k), h), k), h));

  printf("\n\nGrazie per aver usato il nostro programma!\n\n");

  return 0;
}