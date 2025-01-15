#include <stdio.h>  //standard input output
#include<stdbool.h> //serve per sopperire alla mancanza di c che non ha le variabili booleane

//macros
#define NEW_LINE printf("\n");
//mi aiuta a definire un pezzo di codice che posso riutilizzare all'interno del codice
#define PI_GRECO 3.141592265358

int main (){
    bool b=true;
    printf("my bool value is %d", b);
    NEW_LINE;

    int i=10; //intero
    printf("my integer value %d", i);
    NEW_LINE;

    printf("\n"); // ritorna a capo
    // per non doverlo riscrivere ogni volta creo una macro NEW_LINE a cui do il valore all'inizio del programma
NEW_LINE;

float f=10.0; //reali piccoli
printf("Enter a real number:  ");
scanf("%f", &f);  //devo mettere & nella scanf per dirle di andare a leggere non la variabile stessa, ma il valore che le ho dato con la tastiera
printf("Your float number is %f", f);
NEW_LINE;
NEW_LINE;

printf("==AREA DEL CERCHIO==");
NEW_LINE;
printf("Enter the radius: ");
scanf("%f", &f);
float area=f*f*PI_GRECO; //creo la nuova variabile area
printf("The circle's area is: %f", area);
NEW_LINE;
NEW_LINE;

float funny=(f+f-PI_GRECO)/10.0;
printf("Funny is: %f", funny);
NEW_LINE;

    return 0;
}