#include <stdio.h>
#include <string.h>
//#include "macro4_2.h"

int main() {

    // Gestisca le spese mensili per elettricità, acqua, gas e internet.

    printf("Inserire spesa elettricita: ");
    float elet=0;
    scanf("%f", &elet);

    printf("Inserire spesa acqua: ");
    float acqua=0;
    scanf("%f", &acqua);

    printf("Inserire spesa gas: ");
    float gas=0;
    scanf("%f", &gas);

    printf("Inserire spesa internet: ");
    float inte=0;
    scanf("%f", &inte);

    // Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
    // Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare il calcolo della penale in base a una configurazione.

    //#ifdef abilita_penale
    /*float tot=elet+acqua+gas+inte;
    float penale=penalty*tot;
    printf("Il pagamento è in ritardo?[S/N]");
    char ritardo[2];
    scanf("%s", ritardo);

    if(strcmp(ritardo,"S")==0) {
        printf("Calcolo penale!");

        printf("Spesa totale: %.2f", tot);

        printf("Spesa con penale: %.2f", penale+tot );
    }
*/

    //#endif
    // Permettere il debug del programma stampando informazioni aggiuntive.
    // Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
    // Offra suggerimenti di risparmio utilizzando uno switch.
    // Stampi un riepilogo finale con tutte le informazioni.


    return 0;
}