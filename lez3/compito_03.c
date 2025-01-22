/*Stampi un messaggio introduttivo con il proprio nome e cognome.
Definire 5 macro per le seguenti operazioni aritmetiche:
Somma
Sottrazione
Moltiplicazione
Divisione
Modulo
L'utente inserirà due numeri interi e il programma mostrerà il risultato di ogni operazione utilizzando le macro definite.
Il programma mostrerà anche un calcolo complesso in cui sono utilizzate insieme tutte le macro definite in un unico calcolo
provare ad inserire le macro in un file .h diverso dal file principale .c*/

//including library for standarn input/output
#include <stdio.h>
//including library for strings
#include <string.h>

//macro that prints out name and surname
#define name printf("Irene Vallan\n\n");

// macro definitions for the 5 operations
#define sum(x, y) x + y 
#define subtraction(x, y) x - y
#define multiplication(x, y) x *y
#define division(x, y) x / y
#define module(x, y) x % y

int main() {
  //using the macro to print the name and surname
  name

  //the user inserts two numbers
  printf("Inserire il primo numero:\t");
  int x;
  scanf("%d", &x);

  printf("Inserire il secondo numero:\t");
  int y;
  scanf("%d", &y);

  //defining h, k to use x and y as float numbers only while calculating the division and the complex calculation
  float h = x, k = y;

  //printing the result of all the operations
  printf("\nLa somma è: %d + %d = %d\n", x, y, sum(x, y));
  printf("La sottrazione è: %d - %d = %d\n", x, y, subtraction(x, y));
  printf("Il prodotto è: %d * %d = %d\n", x, y, multiplication(x, y));
  printf("La divisione è: %d : %d = %.2f\n", x, y, division(h,k));
  printf("Il modulo è: %d %% %d = %d\n", x, y, module(x, y));
  
  //printing the result of a complex calculation
  printf("Esempio di calcolo complesso: (((%d + %d) * %d) - %d) / %d = %.2f", 
        x, y, x, y, x, division(subtraction(multiplication(sum(h, k), h), k), h));

  //printing a goodbye message
  printf("\n\nGrazie per aver usato il nostro programma!\n\n");
   
  //the program is terminate successfully
  return 0;
}