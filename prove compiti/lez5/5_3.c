// chieda all'utente di inserire una sequenza di numeri interi positivi; 
//il programma deve calcolare la somma dei numeri, il massimo numero inserito e la lunghezza della sequenza
// l'input termina quando l'utente inserisce il numero 0 (lo zero non deve essere incluso nei calcoli)
// se l'utente inserisce un numero negativo, il programma deve ignorarlo e chiedere un altro numero.
// dopo che l'utente termina la sequenza, il programma deve stampare: 
//la somma totale dei numeri, il numero massimo inserito, la lunghezza della sequenza (escludendo i numeri negativi e lo zero)
// se l'utente non inserisce alcun numero valido prima di inserire 0, il programma deve stampare un messaggio adeguato, ad esempio:
// "Nessun numero valido inserito"
// utilizzare il ciclo while

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n=0, sum=0, lun=0, max=0;
    printf("Inserire numeri: ");
    scanf("%d", &n);

    while (n!=0) {
        if(n>0){
            sum +=n;
            lun++;
            if(n>max) {
                max=n;
            }
        }
        else if(n<0) {
            printf("\nNumero non valido.");
        }

        printf("Inserire numeri: ");
        scanf("%d", &n);
    }
    
        if(lun==0) {
            printf("Nessun numero valido inserito\n");
        }
        else {
            printf("\nLa somma è: %d", sum);
            printf("\nIl massimo è: %d", max);
            printf("\nNumero di valori inseriti: %d\n\n", lun);
        }

    return 0;
}