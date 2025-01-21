#include <stdio.h>
#include <string.h>

#define name printf("Irene Vallan\n\n"); //macro definition for the name
#define sum(x, y) x + y // macro definitions for the operations
#define subtraction(x, y) x - y
#define multiplication(x, y) x *y
#define division(x, y) x / y
#define module(x, y) x % y

int main() {
  name //the program prints the name

  printf("Inserire il primo numero:\t"); //the user inserts two numbers
  int x;
  scanf("%d", &x);
  printf("Inserire il secondo numero:\t");
  int y;
  scanf("%d", &y);

//defining h, k to use x and y as float numbers only while calculating the division and the complex calculation
  float h = x, k = y;
  printf("\nLa somma è: %d + %d = %d\n", x, y, sum(x, y)); //the program prints the operations and a complex calculation
  printf("La sottrazione è: %d - %d = %d\n", x, y, subtraction(x, y));
  printf("Il prodotto è: %d * %d = %d\n", x, y, multiplication(x, y));
  printf("La divisione è: %d : %d = %.2f\n", x, y, division(h,k));
  printf("Il modulo è: %d %% %d = %d\n", x, y, module(x, y));
  
  printf("Esempio di calcolo complesso: (((%d + %d) * %d) - %d) / %d = %.2f", 
        x, y, x, y, x, division(subtraction(multiplication(sum(h, k), h), k), h));

  printf("\n\nGrazie per aver usato il nostro programma!\n\n");

  return 0;
}