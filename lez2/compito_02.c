#include <stdio.h>
#include <string.h>

#define nome printf("Irene Vallan\n\n"); //definizione macro nome cognome

#define PERC_R1 85*peso/100  //definizioni macro percentuali di recupero
#define PERC_R2 75*peso/100
#define PERC_R3 65*peso/100
#define PERC_R4 50*peso/100
#define PERC_R5 40*peso/100

int main() {
	nome
	
	printf("Inserire la categoria RAEE: R");
	int categoria;
	scanf("%d", &categoria);

	printf("Inserire il peso (kg): ");
	double peso;
	scanf("%lf", &peso);

	if (categoria == 1) {
		printf("\nPeso totale: %.2lf", peso);
		printf("\nRecuperabile: %.2lf", PERC_R1);
		printf("\nIrrecuperabile: %.2lf", peso - PERC_R1);
	}

	else if (categoria == 2) {
		printf("\nPeso totale: %.2lf", peso);
		printf("\nRecuperabile: %.2lf", PERC_R2);
		printf("\nIrrecuperabile: %.2lf", peso - PERC_R2);
	}

	else if (categoria == 3) {
		printf("\nPeso totale: %.2lf", peso);
		printf("\nRecuperabile: %.2lf", PERC_R3);
		printf("\nIrrecuperabile: %.2lf", peso - PERC_R3);
	}

	else if (categoria == 4) {
		printf("\nPeso totale: %.2lf", peso);
		printf("\nRecuperabile: %.2lf", PERC_R4);
		printf("\nIrrecuperabile: %.2lf", peso - PERC_R4);
	}

	else if (categoria == 5) {
		printf("\nPeso totale: %.2lf", peso);
		printf("\nRecuperabile: %.2lf", PERC_R5);
		printf("\nIrrecuperabile: %.2lf", peso - PERC_R5);
	}

	else { printf("ERRORE"); };


	printf("\n\nGrazie per aver usato il nostro programma!\n");

	return 0;
}