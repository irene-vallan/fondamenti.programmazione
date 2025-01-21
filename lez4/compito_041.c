#include <stdio.h> 
#include <string.h> 

// macro that calculate the IVA of the expense
#define IVA 22*expense/100 

int main(){
    //insert the day of the week
    printf("Inserire il giorno della settimana: "); 
    char day[20];
    scanf("%s", day);


    //insert the expense
    printf("\nInserire la spesa effettuata in questo giorno: (euro) "); 
    double expense;
    scanf("%lf", &expense);

    //calculating the total of expense, with and without IVA
    printf("\nSpesa totale senza IVA: %.2lf", expense); 
    printf("\nIVA: %.2lf", IVA);
    printf("\nSpesa totale con IVA: %.2lf", expense+IVA);


    if(strcmp(day,"domenica")==0) {
        printf("\n%s è un giorno festivo.\n\n", day);
    }
    else {
        printf("\n%s è un giorno feriale.\n\n", day);
    };


    return 0;
}