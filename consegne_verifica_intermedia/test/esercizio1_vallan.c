#include <stdio.h>
#include <math.h>
#include "funzioni.h"

int main() {
    int x=0, y=0;
    int size=4;

    //richiesta di inserimento di due numeri da tastiera
    printf("Inserire il primo numero: ");
     scanf("%d", &x);
    printf("Inserire il secondo numero: ");
    scanf("%d", &y);

    //scelta delle operazioni da tastiera
    printf("1. Addizione (+)\n2. Sottrazione (-)\n3. Moltiplicazione (*)\n4. Divisione (/)\n5. Modulo (%%)\n6. Potenza (^)\n7. Test di tutte le funzioni\n8. Esci\nScegli un'operazione (1-8):");
    int choice=0;
    do {
        scanf("%d", &choice);
        switch (choice) {
            //addizione
            case 1: 
            printf("%d + %d = %d\n", x, y, add(x, y));
            break;

            //sottrazione
            case 2:
            printf("%d - %d = %d\n", x, y, sub(x, y));
            break;

            //moltiplicazione
            case 3: 
            printf("%d * %d = %d\n", x, y, mul(x, y));
            break;

            //divisione con messaggio di errore per denominatore = 0
            case 4:
            if(y!=0) {
                printf("%d / %d = %.3f\n", x, y, divi(x, y));
            }
            else { 
                printf("Errore. Denominatore non valido");
            }
            break;
            

            //modulo con messaggio di errore per denominatore=0
            case 5:
            if(y!=0) {
                printf("%d %% %d = %d", x, y, mod(x, y));
            }
            else {
                printf("Errore. Denominatore non valido");
            }
            break;

            //potenza
            case 6:
            printf("%d ^ %d = %d\n", x, y, power(x, y));
            break;

            //risultati di tutte le operazioni tra i numeri del vettore
            case 7:
            printf("Test delle operazioni sui numeri {2, 4, 6, 8, 10}\n");
            test_all_operations(numbers, size);

            //test delle operazioni con valori inseriti da tastiera
            printf("Ora prova tu! Inserire 5 numeri interi: ");
            int numbers2[5];
            for( int i=0; i<5; i++) {
                scanf("%d", &numbers2[i]);
            }
            printf("\nTest delle operazioni: ");
            test_all_operations(numbers2, 5);
            break;

            //uscita dal programma
            case 8:
            break;

            //messaggio di errore se viene selezionato un caso non valido
            default:
            printf("Scelta non valida!\n");
        }
    } while (choice!=8);

    return 0;
}