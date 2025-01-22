/*Provare ad inserire le macro in un file .h diverso dal file principale .c*/

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