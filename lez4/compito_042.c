/*Gestisca le spese mensili per elettricità, acqua, gas e internet.
Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare il calcolo della penale in base a una configurazione.
Permettere il debug del programma stampando informazioni aggiuntive.
Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
Offra suggerimenti di risparmio utilizzando uno switch.
Stampi un riepilogo finale con tutte le informazioni.*/

#include <stdio.h>
#include <string.h>

#include "compito_04.h"

int main() {
    printf("Inserire la spesa per l'elettricità: ");
    double elettricita;
    scanf("%lf", &elettricita);

    printf("Inserire la spesa per l'acqua: ");
    double acqua;
    scanf("%lf", &acqua);

    printf("Inserire la spesa per internet: ");
    double internet;
    scanf("%lf", &internet);

    double spesa=elettricita+acqua+internet;
    double penale1;

    printf("La spesa totale è: %.2lf\n", spesa);

    if(spesa>50) {
    penale1=penale*spesa;
    }
    else{
        penale1=0;
    };

    printf("La penale è: %.2lf\n\n", penale1);

    return 0;
}

