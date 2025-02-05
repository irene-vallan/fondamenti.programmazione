#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "macro4_2.h"

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

    #ifdef abilita_penale
    float tot=elet+acqua+gas+inte;
    float penale=penalty*tot;
    printf("\nIl pagamento è in ritardo?[S/N]");
    char ritardo[2];
    scanf("%s", ritardo);

    if(strcmp(ritardo,"s")==0) {
        debugPrint(penale);
        printf("\nCalcolo penale!");
        printf("\nSpesa totale: %.2f", tot);
        printf("\nSpesa con penale: %.2f", penale+tot );
    }
    else {
        printf("\nNon c'è penale");
    }
    #endif
    printf("\n");
    
    // Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
    if(tot>100) {
        printf("\nLa spesa supera la soglia mensile.");
    }
    else {
        printf("\nComplimenti! Hai risparmiato");
    }
    printf("\n");

    // Offra suggerimenti di risparmio utilizzando uno switch.

bool scelta;
    do{
        printf("\nSu cosa vuoi risparmiare? (1-5)");
        int risp=0;
        scanf("%d", &risp);
        scelta=false;

        switch (risp){
            case 1:
                printf("\nSpegni la luce");
                break;
            case 2:
                printf("\nChiudi il rubinetto");
                break;
            case 3:
                printf("\nspegni il fornello");
                break;
            case 4:
                printf("\nSpegni il telefono");
                break;
            
            default:
                printf("\nScelta non valida\n");
                scelta=true;
        }
    } while (scelta);

    // Stampi un riepilogo finale con tutte le informazioni.

    return 0;
}