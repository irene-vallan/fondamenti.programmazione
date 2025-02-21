#include <stdio.h>
#include <string.h>
#include "macro2.h"

int main() {
    double ele=0.0, acqua=0.0, gas=0.0, inte=0.0;

    printf("inserire spesa elettricità: ");
    scanf("%lf", &ele);

    printf("inserire spesa acqua: ");
    scanf("%lf", &acqua);

    printf("inserire spesa gas: ");
    scanf("%lf", &gas);

    printf("inserire spesa internet:");
    scanf("%lf", &inte);
    
    printf("\ninserire soglia predefinita di spesa: ");
    double soglia=0.0;
    scanf("%lf", &soglia);

    double spesa=ele+acqua+gas+inte;
    if(spesa>soglia) {
        printf("\nla spesa totale super la soglia\n");
        printf("\nSu cosa vuoi risparmiare?");

        int caso=0;
        do{
            printf("\n1.elettricità\n2.acqua\n3.gas\n4.internet\n5.esci dal programma\nscegli un numero: ");
            int scelta=0;
            scanf("%d", &scelta);

            switch (scelta) {
                case 1:
                printf("spegni la luce\n");
                caso=1;
                break;

                case 2:
                printf("chiudi il rubinetto\n");
                caso=1;
                break;

                case 3:
                printf("spegni i fornelli\n");
                caso=1;
                break;

                case 4:
                printf("spegni il pc\n");
                caso=1;
                break;

                case 5:
                caso=0;
                break;

                default:
                printf("scelta non valida\n");
                caso=1;
                break;
            }
        } while(caso==1);
    }
    else {
        printf("\nla spesa non supera la soglia\n\n");
    }

    #ifdef CALCOLO_PENALE
    printf("\nil pagamento è avvenuto in ritardo? S/N ");
    char ritardo[2];
    scanf("%s", ritardo);

    if(strcmp(ritardo, "s")==0) {
        printf("\npagamento in ritardo");
        double penale=perc*spesa;
        printf("\nspesa totale: %.2lf", spesa);
        printf("\nla penale è: %.2lf", penale);
    }
    else if(strcmp(ritardo, "n")==0) {
        printf("\nla spesa è stata pagata in tempo");
    }
    else {
        printf("\nscelta non accettabile");
    }
    #endif //CALCOLO_PENALE

    printf("\n\n");
    return 0;
}