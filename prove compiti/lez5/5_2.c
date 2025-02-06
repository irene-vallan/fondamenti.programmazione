// simuli un semplice gioco in cui l'utente deve indovinare un numero segreto
// il programma genera un numero segreto casuale tra 1 e 100
// l'utente ha un numero illimitato di tentativi per indovinare il numero.
// dopo ogni tentativo, il programma deve fornire un suggerimento: 
// se il numero inserito è troppo alto, il programma deve stampare: "Troppo alto! Riprova."; 
//se il numero inserito è troppo basso, il programma deve stampare: "Troppo basso! Riprova."
// se l'utente indovina, il programma stampa: "Complimenti! Hai indovinato il numero in [X] tentativi." 
//(dove [X] è il numero di tentativi effettuati).
// il programma termina solo quando l'utente indovina il numero.
// usare il ciclo do while per gestire i tentativi
// utilizzare la funzione rand() per generare il numero segreto casualmente
// gestire i tentativi con una variabile contatore
// verificare che l'input sia valido (solo numeri interi positivi)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    srand(time(NULL));
    int ns= rand()%100+1;
    int n=0; //numero inserito
    int tent=1; //numero di tentativi

    printf("Inserisci un numero tra 1 e 100: ");
    scanf("%d", &n);

    do {
        if(n<ns && n>0) {
            printf("Troppo basso! Riprova: ");
            scanf("%d", &n);
            tent++;
        }
        else if (n>ns && n<=100) {
            printf("Troppo alto! Riprova: ");
            scanf("%d", &n);
            tent++;
        }
        else if (n<=0 || n>100) {
            printf("Numeo inserito non valido. nuovo numero: ");
            scanf("%d", &n);
        }
    } while (n!=ns);

    printf("Complimenti! Hai indovinato il numero in %d tentativi\n\n", tent);

    return 0;
}