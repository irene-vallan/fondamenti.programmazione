// Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare il calcolo della penale in base a una configurazione.

#ifndef MACRO_H
#define MACRO_H

// Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
#define penalty 0.1
#define abilita_penale

// Permettere il debug del programma stampando informazioni aggiuntive.
#define debug

#ifdef debug 
#define debugPrint(x) printf("debug!\n"); printf("La penale è: %.2f", x);

#endif //debug

#endif //MACRO_H