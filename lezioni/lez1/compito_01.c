#include <stdio.h>

int main()
{ printf("Enter your name:\t");
char name[30];
scanf("%s", name);

printf("\nEnter your surname:\t");
char surname[30];
scanf("%s", surname);

printf("\nWelcome, %s %s.\nThank you for using our program.\nWe wish you a merry Christmas!\n\n\n", name, surname);

printf("   *\n  ***\n *****\n*******\n  ***\n\n\n");
    return 0;
}
