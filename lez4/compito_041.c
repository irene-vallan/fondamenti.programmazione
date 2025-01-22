/*Legga da tastiera il giorno della settimana (come stringa) e la spesa effettuata in quel giorno.
Usi una macro per calcolare l'IVA (22%) sulla spesa.
Usi una struttura di controllo if-else per distinguere i giorni feriali da quelli festivi.
Stampi il totale delle spese con e senza IVA, specificando se il giorno è feriale o festivo.*/

//lybrary for the standard input/output
#include <stdio.h> 
//library for strings
#include <string.h> 

// macro that calculate the IVA of the expense
#define IVA 22*expense/100 

int main(){
    //the user inserts the day of the week
    printf("Inserire il giorno della settimana: "); 
    char day[20];
    scanf("%s", day);

    //the user inserts the expense
    printf("\nInserire la spesa effettuata in questo giorno: (euro) "); 
    double expense;
    scanf("%lf", &expense);

    //printing the total of expense, with and without IVA
    printf("\nSpesa totale senza IVA: %.2lf", expense); 
    printf("\nIVA: %.2lf", IVA);
    printf("\nSpesa totale con IVA: %.2lf", expense+IVA);

    //if-else structure to distinguish weekdays from holidays
    if(strcmp(day,"domenica")==0) {
        printf("\n%s è un giorno festivo.\n\n", day);
    }
    else {
        printf("\n%s è un giorno feriale.\n\n", day);
    };

    //the program is terminated successfully
    return 0;
}