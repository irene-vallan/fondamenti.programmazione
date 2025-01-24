/*Gestisca le spese mensili per elettricità, water, gas e internet.
Usi una macro per calcolare una penale del 10% per ritardi nei pagamenti.
Usi direttive come #ifdef e #ifndef per: abilitare o disabilitare il calcolo della penale in base a una configurazione.
Permettere il debug del programma stampando informazioni aggiuntive.
Determini se la spesa totale supera una soglia predefinita e stampi un messaggio con if-else.
Offra suggerimenti di risparmio utilizzando uno switch.
Stampi un riepilogo finale con tutte le informazioni.*/

#include <stdio.h>

#include "compito_04.h"

int main() {
    //inserting the electricity expense
    printf("Inserire la spesa per l'elettricità: ");
    double electricity;
    scanf("%lf", &electricity);

    //inserting the water expense
    printf("Inserire la spesa per l'water: ");
    double water;
    scanf("%lf", &water);

    //inserting gas expense
    printf("Inserire la spesa per il gas: ");
    double gas;
    scanf("%lf", &gas);

    //inserting the internet expense
    printf("Inserire la spesa per internet: ");
    double internet;
    scanf("%lf", &internet);

    //calculating the total expense
    double tot_exp = electricity + water + gas + internet;

    //printing the total expense
    printf("\nLa spesa totale è: %.2lf\n", tot_exp);

    //if-else to determin if the total expense is grater than the limit
    if(tot_exp<exp_limit) {
        printf("\nLa spesa totale è entro la soglia predefinita.\n");
    }
    else{
        printf("\nLa spesa totale supera la soglia predefinita.\n\n");
    };

   //the user inserts if the payment was delayed or not
   printf("Il pagamento è in ritardo [s/n]; ");
    char delay[2];
   scanf("%1s", delay);

   
   if(!strcmp(delay, "s")) {
     printf("\nAttenzione: la spesa mensile è stata pagata in ritardo.\n");
     double penalty= penalty_calc(tot_exp);
     printf("Penale: %.2lf\n\n", penalty);
   }
   else {
    printf("\nLa spesa mensile è stata pagata entro la data di scadenza.\n\n");
   }

    return 0;
}

