// simuli un semplice gioco in cui l'utente deve indovinare un numero segreto
// il programma genera un numero segreto casuale tra 1 e 100
// l'utente ha un numero illimitato di tentativi per indovinare il numero.
// dopo ogni tentativo, il programma deve fornire un suggerimento: se il numero inserito è troppo alto, il programma deve stampare: "Troppo alto! Riprova."; se il numero inserito è troppo basso, il programma deve stampare: "Troppo basso! Riprova."
// se l'utente indovina, il programma stampa: "Complimenti! Hai indovinato il numero in [X] tentativi." (dove [X] è il numero di tentativi effettuati).
// il programma termina solo quando l'utente indovina il numero.
// usare il ciclo do while per gestire i tentativi
// utilizzare la funzione rand() per generare il numero segreto casualmente
// gestire i tentativi con una variabile contatore
// verificare che l'input sia valido (solo numeri interi positivi)

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // trucco per randomizzare il più possibile, usare il tempo corrente per inizializzare il rand
    // srand inizializza il motore che genera numeri casuali
    srand(time(NULL));

    // generare numero casuale
    int numero_segreto = rand() % 100 + 1;
    // il modulo da un resto tra 0 e 99
    // rand genera un numero casuale tra due estremi, che si trovano sulla documentazione di c++

    int numero_inserito = 0;
    int contatore_tentativi = 0;

    do
    {
        printf("Inserire un numero tra 1 e 100: ");
        scanf("%d", &numero_inserito);

        if (numero_inserito < 1 || numero_inserito > 100)
        {
            printf("Numero inserito non valido\n\n");
            return 1;
        }

        else
        {
            contatore_tentativi++;
            printf("Tentativo numero %d\n.", contatore_tentativi);

            if (numero_inserito < numero_segreto)
            {
                printf("Il tuo numero è troppo piccolo.\n\n");
            }
            else if (numero_inserito > numero_segreto)
            {
                printf("Il numero inserito è troppo grande.\n\n");
            }
            else
            {
                printf("Esatto!\n");
                printf("Hai indovinato in %d tentativi.\n\n", contatore_tentativi);
            }
        }
        while (numero_inserito != numero_segreto)
            ;
    }

    return 0;
}