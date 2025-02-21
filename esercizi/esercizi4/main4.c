// Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata 
// in quel giorno.
// Usi una macro per calcolare l'IVA (22%) sulla spesa.
// Usi una struttura di controllo if-else per distinguere i giorni 
//feriali da quelli festivi.
// Stampi il totale delle spese con e senza IVA, 
//specificando se il giorno è feriale o festivo.

#include <stdio.h>
#include <string.h>
#include "macro1.h"

int main() {
    printf("Inserire il giornodella settimana: ");
    char giorno[10];
    scanf("%s", giorno);

    int lun=(strcmp(giorno, "lunedi"));
    int mar=(strcmp(giorno, "martedi"));
    int mer=(strcmp(giorno, "mercoledi"));
    int gio=(strcmp(giorno, "giovedi"));
    int ven=(strcmp(giorno, "venerdi"));
    int sab=(strcmp(giorno, "sabato"));

    if(strcmp(giorno, "domenica")==0) {
        printf("giorno festivo\n");
    }
    else if (lun==0 || mar==0 || mer==0 || gio==0 || ven==0 || sab==0){
        printf("giorno feriale\n");
    }
    else {
        printf("\nGiorno inserito non valido\n");
        return 0;
    }

    double spesa=0.0;

    printf("\nInserire spesa: ");
    scanf("%lf", &spesa);

    if(spesa>=0){
        printf("\nspesa totale: %.2lf", spesa);
        double prezzoIVA=spesa*IVA;
        double spesaIVA= prezzoIVA+spesa;
        printf("\nspesa con iva: %.2lf", spesaIVA);
        printf("\npercentuale di iva: %.2lf", prezzoIVA);
    }
    else{
        printf("\nspesa inserita non valida\n");
    }

    return 0;
}