// Chieda all'utente di inserire il proprio nome e cognome.
// Stampi un messaggio di benvenuto personalizzato.
// Visto che siamo ormai a Natale, visualizzare un messaggio di auguri.
// Specifiche del Programma
// 
// Usare #include <stdio.h> per l'input e l'output.
// La funzione main() deve includere:
// Dichiarazione di variabili per il nome, il cognome.
// Utilizzo di printf per stampare i messaggi e scanf per leggere i dati.
// Utilizzo di \n per organizzare l'output su più righe.
// Esempio di Output Atteso
// 
// Input Utente:
// 
// Inserisci il tuo nome: Mario  
// Inserisci il tuo cognome: Rossi  
// Output del Programma:
// 
// Benvenuto, Mario Rossi!  
// Grazie per aver usato il nostro programma.  
// Ti auguriamo Buone Feste
//    *
//   ***
//  *****
// *******
//   ***

#include <stdio.h>

int main () {
    printf("inserire nome e cognome: ");
    char nome[10];
    char cognome[10];
    scanf("%s %s", nome, cognome);

    printf("Benvenuto/a %s %s\n", nome, cognome);
    printf("graize per aver 7usato il nostro programma\nbuone feste!");
    printf("\n\n   *   \n  ***  \n ***** \n*******\n  ***  \n\n");
    return 0;
}