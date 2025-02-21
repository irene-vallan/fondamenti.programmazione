// chieda all'utente di inserire una sequenza di numeri interi positivi; il programma deve calcolare la somma dei numeri, il massimo numero inserito e la lunghezza della sequenza
// l'input termina quando l'utente inserisce il numero 0 (lo zero non deve essere incluso nei calcoli)
// se l'utente inserisce un numero negativo, il programma deve ignorarlo e chiedere un altro numero.
// dopo che l'utente termina la sequenza, il programma deve stampare: la somma totale dei numeri, il numero massimo inserito, la lunghezza della sequenza (escludendo i numeri negativi e lo zero)
// se l'utente non inserisce alcun numero valido prima di inserire 0, il programma deve stampare un messaggio adeguato, ad esempio: "Nessun numero valido inserito"
// utilizzare il ciclo while

int main() {
    int num=0, sum=0, max=0, len=0;

    printf("Inserisci un numero opositivo (0 per terminare il programma): ");
    scanf(%d, &num);

    while(num!=0) {
        if(num>0) {
            sum=sum+num; //si può scrivere anche sum += num
            if(num>max) {
                max=num;
            }
            len++;

        }
        else {
            printf("Il numero inserito non è positivo\n");
            printf("Inserire un nuovo numero\n");
        };
    }

    if(len>0) {
        printf("\nInformazioni raccolte:\n");
        printf("Somma totale: %d\n", sum);
        printf("Massimo: %d\n", max);
        printf("Contatore numeri inseriti: %d", len)
    }


    return 0;
}