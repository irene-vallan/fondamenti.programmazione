#include <stdio.h>
#include "define.h"

int main() {
    printf("Inserire due numeri interi: ");
    int x=0, y=0;
    scanf("%d %d", &x, &y);

    printf("\n%d + %d = %d", x, y, somma(x, y));
    printf("\n%d - %d = %d", x, y, sott(x, y));
    printf("\n%d * %d = %d", x, y, molt(x, y));
    if(y==0) {
        printf("\ndenominatore non accettabile\n");
        return 0;
    }
    else {
        double a=x, b=y;
        printf("\n%d / %d = %.2lf", x, y, div(a, b));
    }
    printf("\n%d %% %d = %d", x, y, mod(x, y));

    return 0;
}