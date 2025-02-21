
// Output del Programma:
// 
// Peso totale: 100 kg.
// Recuperabile: 85.00 kg.  
// Irrecuperabile: 15.00 kg.
// Grazie per aver usato il nostro programma.  

#include <stdio.h>
#include <string.h>
#include "macro.h"

int main() {
    printf("%s %s", nome, cognome);

    printf("\nInserire categoria: ");
    char category[2];
    scanf("%s", category);

    printf("\ninserire peso: ");
    double peso=0;
    scanf("%lf", &peso);
    if(peso<=0) {
        printf("\npeso inserito non valido\n");
        return 0;
    }

    printf("\npeso totale: %.2lf", peso);
    double recuperabile=0;
    double irrecuperabile=peso-recuperabile;

    if (strcmp(category, "R1")==0) {
        recuperabile=peso* R1;
    }
    else if (strcmp(category, "R2")==0) {
        recuperabile=peso* R2;
    }
    else if (strcmp(category, "R3")==0) {
        recuperabile=peso* R3;
    }
    else if (strcmp(category, "R4")==0) {
        recuperabile=peso* R4;
    }
    else if (strcmp(category, "R5")==0) {
        recuperabile=peso* R5;
    }
    
    if(recuperabile==0) {
        printf("\ncategoria non valida\n");
    }
    else {
        printf("\nrecuperabile: %.2lf", recuperabile);
        printf("\nirrecuperabile: %.2lf", irrecuperabile);
    }
    
    printf("\n\n");
    return 0;
}