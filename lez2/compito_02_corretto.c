/*Stampi un messaggio introduttivo con il proprio nome e cognome
Chieda all'utente di inserire la categoria e il peso in kg. del dispositivo elettronico da riciclare
Stampi un messaggio che indichi qual è il peso in kg. che è possibile riciclare e qual è il peso del materiale da buttare*/

// library for the standard input/output
#include <stdio.h>
//library for strings
#include <string.h>

//contiene tutte le define delle macro
#include "compito_02_corretto.h"

int main() {
	//using the macro to print name and surname
	name
	
	//the user inserts the category
	printf("Inserire la categoria RAEE: ");
	char category[3];
	scanf("%2s", category);
	//%2f considera solo le prime due cifre inserite da tastiera

    // the user inserts the weight
	printf("Inserire il peso (kg): ");
	double weight;
	scanf("%lf", &weight);

	if(weight <=0) {
		printf("\nIl peso non è valido.\n");
		return 1;
	}
	  
	if (weight !=0) {
		printf("\nPeso valido.\n");
	};

    double peso_riciclabile;

   // printing the total weight, the reciclable percentage and the not reciclable percentage based on the category
	if (strcmp(category, "R1")==0) {
    peso_riciclabile=R1;
	}

	else if (strcmp(category, "R2")==0) {
		peso_riciclabile=R2;
	}

	else if (strcmp(category, "R3")==0) {
		peso_riciclabile=R3;
	}

	else if (strcmp(category, "R4")==0) {
		peso_riciclabile=R4;
	}

	else if (strcmp(category, "R5")==0) {
		peso_riciclabile=R5;
	}
	else{
		printf("Categoria non valida\n");
		return 1;
	};

    double recuperabile= peso_riciclabile*weight;
    double irrecuperabile=weight-recuperabile;

    printf("Il peso totale è: %.2lf\n", weight);
    printf("Il peso riciclabile è: %.2lf\n", recuperabile);
    printf("Il peso non riciclabile: %.2lf\n", irrecuperabile);
	

    //printing a goodbye message
	printf("\n\nGrazie per aver usato il nostro programma!\n\n");

    //indication that the program is terminated successfully
	return 0;
}
