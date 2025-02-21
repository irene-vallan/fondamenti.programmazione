//definizioni delle funzioni per le operazioni
#include <stdio.h>

int add(int x, int y) {
    return x+y;
}

int sub(int x, int y) {
    return x-y;
}

int mul(int x, int y) {
    return x*y;
}

float divi(int x, int y) {
        float x1=x, y1=y;
        return x1/y1;
}

int mod(int x, int y) {
        return x%y;
}

//definizione della potenza utilizzando la moltiplicazione
int p=1;
int i=0;
int power(int x, int y) {
    while(i<y) {
        p=p*x;
        i++;
    }
    return p;
}

//definizione della funzione per testare tutte le operazioni
int numbers[] = {2, 4, 6, 8, 10};
void test_all_operations(int numbers[], int size) {
    for (int i=0; i<size-1; i++ ) {
        int a = numbers[i];
        int b= numbers[i+1];
        
        printf("%d + %d = %d\n", a, b, add(a, b));
        printf("%d - %d = %d\n", a, b, sub(a, b));
        printf("%d * %d = %d\n", a, b, mul(a, b));
        printf("%d / %d = %.3f\n", a, b, divi(a, b));
        printf("%d %% %d = %d\n", a, b, mod(a, b));
        printf("%d ^ %d = %d\n", a, b, power(a, b));
    }

};
