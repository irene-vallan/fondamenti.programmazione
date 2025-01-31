// Chieda all'utente di inserire 10 numeri interi e li memorizzi in un array.
// Calcoli e stampi:
// La somma di tutti i numeri positivi presenti nell’array.
// La somma di tutti i numeri negativi presenti nell’array.
// Il valore massimo e il valore minimo dell'array.
// Il numero di elementi pari e il numero di elementi dispari presenti nell'array.
// Stampi un messaggio se tutti i numeri inseriti sono positivi o tutti negativi.
// Stampi un messaggio se almeno un numero è multiplo di 5.

#include <stdio.h>
#include <stdbool.h>
#include <limits.h>  //contiene le funzioni max e min
#include "compito_061.h"

int main() {
    int numbers[size];
    int sum_pos=0;
    int sum_neg=0;
    int max=INT_MIN;
    int min=INT_MAX;
    int count_pari=0;
    int count_dis=0;
    bool mult=false;
    int contPos=0;
    int contNeg=0;

    //i indica la posizione nell'array
    // ricordare che le posizioni partono da 0
    for (int i=0; i<size; i++ ) {
        printf("Numero %d: ",i+1 );
        scanf("%d", &numbers[i]);
    }

    for (int i=0; i<size; i++ ) {
        int n=numbers[i];

        if(n>0) {
            sum_pos +=n;
            contPos++;
        }
        else {
            sum_neg += n;
            contNeg ++;
        }

        if(max<n) {
            max=n;
        }
        if(min>n) {
            min=n;
        }

        /*if((n%2)==0) {
            count_pari++;
        }
        else {
            count_dis++;
        }*/
        ( (n%2)==0 ? count_pari++: count_dis++); //modo compatto 

        if(n%5==0) {
            mult=true;
        }

    }

    //output dei risultati
    printf("\n==== RISULTATI ====\n");
    printf("Somma dei positivi: %d\n", sum_pos);
    printf("Somma dei negativi: %d\n", sum_neg);
    printf("Massimo: %d\n", max);
    printf("Minimo: %d\n", min);
    printf("Numeri pari: %d\n", count_pari);
    printf("Numeri dispari: %d\n", count_dis);
    /*if(mult) {    // si può anche non mettere ==true perchè è un booleano
        printf("E presente almeno un numero divisibile per 5\n");
    }
    else {
        printf("Non è presente numero divisibile per 5\n");
    }*/

    (mult ? printf("E presente almeno un numero divisibile per 5\n"): printf("Non è presente numero divisibile per 5\n"));

    if (contPos == size){
        printf("Tutti i numeri sono positivi.\n");
    }
    
    else if (contNeg = size){
        printf("Tutti i numeri sono negativi.\n");
    }

    printf("\n\n");
    return 0;
}