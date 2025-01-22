/*Stampi un messaggio introduttivo con il proprio nome e cognome
Chieda all'utente di inserire la categoria e il peso in kg. del dispositivo elettronico da riciclare
Stampi un messaggio che indichi qual è il peso in kg. che è possibile riciclare e qual è il peso del materiale da buttare*/

// library for the standard input/output
#include <stdio.h>
//library for strings
#include <string.h>

//macro that prints name and surname
#define name printf("Irene Vallan\n\n"); 

//constants for the recyclable percentages
#define R1 85*weight/100  
#define R2 75*weight/100
#define R3 65*weight/100
#define R4 50*weight/100
#define R5 40*weight/100

int main() {
	//using the macro to print name and surname
	name
	
	//the user inserts the category
	printf("Inserire la categoria RAEE: ");
	char category[3];
	scanf("%s", category);

    // the user inserts the weight
	printf("Inserire il peso (kg): ");
	double weight;
	scanf("%lf", &weight);

   // printing the total weight, the reciclable percentage and the not reciclable percentage based on the category
	if (strcmp(category, "R1")==0) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R1);
		printf("\nIrrecuperabile: %.2lf", weight - R1);
	}

	else if (strcmp(category, "R2")==0) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R2);
		printf("\nIrrecuperabile: %.2lf", weight - R2);
	}

	else if (strcmp(category, "R3")==0) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R3);
		printf("\nIrrecuperabile: %.2lf", weight - R3);
	}

	else if (strcmp(category, "R4")==0) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R4);
		printf("\nIrrecuperabile: %.2lf", weight - R4);
	}

	else if (strcmp(category, "R5")==0) {
		printf("\nPeso totale: %.2lf", weight);
		printf("\nRecuperabile: %.2lf", R5);
		printf("\nIrrecuperabile: %.2lf", weight - R5);
	}
    //printing "ERROR" if the category inserted by the user is not right
	else { printf("ERRORE: inserire un'altra categoria"); };

    //printing a goodbye message
	printf("\n\nGrazie per aver usato il nostro programma!\n");

    //indication that the program is terminated successfully
	return 0;
}