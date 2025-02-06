// legga un numero intero positivo N dall'utente e stampi un triangolo di numeri con N righe
// per tutti i cicli utilizzare il for
// controllare che l'input inserito dall'utente sia positivo; in caso contrario, richiedi di reinserire il valore

#include <stdio.h>

int main() {
    int n=0;
    printf("Inserire numero positivo: ");
    scanf("%d", &n);

    do {
        if(n<=0) {
            printf("Non valido, inserire un altro valore: ");
            scanf("%d", &n);
        }
    } while(n<=0);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}