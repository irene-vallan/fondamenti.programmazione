#include <stdio.h>  //standard input output

int main()
{
    printf("hello world!!!!\n\n\n");  // \n manda a capo
    printf("hi\n\n\n");

    //creo variabile di caratteri per poter salvare le cose scritte, non solo stamparle
    char name[32];

    //ask for a name
    printf("enter a name:   ");

    //read the input the user writes
    scanf("%s", name); //scanf legge, %s indica che name conterrà una stringa di caratteri 

    //modalità debug: si ferma al pallino rosso

    //print a message with the name entered
    printf("\nHello\t%s\n\n\n", name); //al posto di %s compare ciò che è stato inserito in name
    // \t tabulazione

    return 0;
}

