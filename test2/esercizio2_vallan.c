#include <stdio.h>
#include <string.h>
#include "funzioni.h"

int main() {
    //definizione di un array di 7 stringhe
    char words[7][20] = {"elephant", "42trees", "Anna", "oasis", "civic", "mango", "Galaxy"};
    int size = sizeof(words) / sizeof(words[0]);
    printf("Le stringhe sono:\n");
    for(int i=0; i<=size - 1; i++) {
        printf("%s ", words[i]);
    };

    // stampa il numero di stringhe che iniziano con una vocale
    printf("\nNumero di stringhe che iniziano con una vocale: %d\n", conto_vocali(words, size));

    //stampa il numero di stringhe che contengono almeno un numero
    printf("Numero di stringhe che contengono almeno un numero: %d\n", conto_numeri(words, size));

    // Stringa più lunga e più corta
    char lunga[20], corta[20];
    max_min_lun(words, size, lunga, corta);
    printf("Stringa più lunga: \"%s\"\n", lunga);
    printf("Stringa più corta: \"%s\"\n", corta);

    // Numero di stringhe palindrome
    printf("Numero di stringhe palindrome: %d\n", conto_palindromi(words, size));

    // Numero totale di caratteri
    printf("Numero totale di caratteri: %d\n", tot_caratteri(words, size));


    // Elenco delle stringhe in ordine corretto
    printf("Elenco delle stringhe in ordine corretto: ");
    ordine(words, size);

    //elenco delle stringhe in ordine inverso
    printf("\nElenco delle stringhe in ordine inverso: ");
    contrario(words, size);

    //elenco delle stringhe in ordine inverso con caratteri invertiti
    printf("\nElenco delle stringhe in ordine inverso con caratteri invertiti: ");
    caratteri_invertiti(words, size);

    printf("\n\n");

    return 0;
}