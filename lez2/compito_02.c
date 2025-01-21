// library for the standard input/output
#include <stdio.h>

//librayr for strings
#include <string.h>

//macro that prints name and surname
#define name printf("Irene Vallan\n\n"); 

//contants for the recycle percentages
#define R1 85*weight/100  
#define R2 75*weight/100
#define R3 65*weight/100
#define R4 50*weight/100
#define R5 40*weight/100

int main() {
	//using the macro to print the name
	name
	
	//the user inserts the category
	printf("Inserire la categoria RAEE: R");
	char category[8];
	//int category;
	scanf("%s", category);

    // the user inserts the weight
	printf("Inserire il peso (kg): ");
	double weight;
	scanf("%lf", &weight);

	if (category == 1) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R1);
		printf("\nIrrecuperabile: %.2lf", weight - R1);
	}

	else if (category == 2) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R2);
		printf("\nIrrecuperabile: %.2lf", weight - R2);
	}

	else if (category == 3) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R3);
		printf("\nIrrecuperabile: %.2lf", weight - R3);
	}

	else if (category == 4) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R4);
		printf("\nIrrecuperabile: %.2lf", weight - R4);
	}

	else if (category == 5) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R5);
		printf("\nIrrecuperabile: %.2lf", weight - R5);
	}

	else { printf("ERRORE"); };


	printf("\n\nGrazie per aver usato il nostro programma!\n");

	return 0;
}