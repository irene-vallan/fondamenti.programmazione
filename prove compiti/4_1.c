// Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
// Usi una macro per calcolare l'IVA (22%) sulla spesa.
// Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
// Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.

#include <stdio.h>
#include <string.h>
#include "macro4_1.h"

int main () {
    printf("Inserire il giorno della settimana: "); 
    char day[20];
    scanf("%s", day);

    printf("\nInserire la spesa effettuata in questo giorno: "); 
    double exp;
    scanf("%lf", &exp);

    float tot_iva=iva*exp;
    if(exp<=0) {
        printf("\nValore inserito non valido\n");
        return 1;
    }
    else {
        printf("\nLa spesa totale senza iva è: %.2f", exp);
        printf("\nL'iva è': %.2f", tot_iva);
        printf("La spesa con iva è: %.2f", exp+tot_iva);
    }

    if(strcmp(day, "domenica")==0) {
        printf("\nGiorno festivo\n\n");
    }
    else {
        printf("\nGiorno feriale\n\n");
    }


    return 0;
}