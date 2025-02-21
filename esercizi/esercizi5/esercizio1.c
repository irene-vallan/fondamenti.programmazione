// legga un numero intero positivo N dall'utente e stampi un triangolo di numeri con N righe
// per tutti i cicli utilizzare il for
// controllare che l'input inserito dall'utente sia positivo; in caso contrario, richiedi di reinserire il valore
// Esempio di funzionamento
// 
// Inserisci un numero intero positivo: 5
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main () {
    int a=0;
    do{   
        printf("inserire un numero positivo: ");
        int n=0;
        scanf("%d", &n);
        
        if (n<=0) {
            printf("\nnumero inserito non valido\n");
            a=0;
        }
        else {
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=i; j++) {
                    printf("%d", j);
                }
                printf("\n");
            }
            a=1;
        }
    } while (a==0);

    return 0;
}