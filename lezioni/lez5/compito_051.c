// legga un numero intero positivo N dall'utente e stampi un triangolo di numeri con N righe
// per tutti i cicli utilizzare il for
// controllare che l'input inserito dall'utente sia positivo; in caso contrario, richiedi di reinserire il valore

#include <stdio.h>

int main() {

    int n=0;
    do{
        printf("Inserire un numero intero positivo: ");
        scanf("%d", &n);

        if (n <= 0){
            printf("\nIl valore inserito è negativo. Inserire un nuovo valore.\n\n");
        };
    } 
    while (n <= 0);

    printf("\n");
    for (int i = 1; i <=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}