#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Funzione che conta quante stringhe iniziano con una vocale (maiuscola o minuscola)
int conto_vocali(char words[][20], int size) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        char primo =words[i][0];
        if (primo == 'a' || primo == 'e' || primo == 'i' || primo == 'o' || primo == 'u' || primo == 'A' || primo == 'E' || primo == 'I' || primo == 'O' || primo == 'U') {
            n++;
        }
    }
    return n;
}

// Funzione che conta quante stringhe contengono almeno un numero
int conto_numeri(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < strlen(words[i]); j++) {
            if (isdigit(words[i][j])) {
                count++;
                break;
            }
        }
    }
    return count;
}

// Funzione per trovare la stringa più lunga e la più corta
void max_min_lun(char words[][20], int size, char lunga[], char corta[]) {
    int max_lun = 0, min_lun = 30; 
    for (int i = 0; i < size; i++) {
        int lunghezza = strlen(words[i]);
        if (lunghezza > max_lun) {
            max_lun = lunghezza;
            strcpy(lunga, words[i]);
        }
        if (lunghezza < min_lun) {
            min_lun = lunghezza;
            strcpy(corta, words[i]);
        }
    }
}

// Funzione che conta quante stringhe sono palindrome
int conto_palindromi(char words[][20], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int lunghezza = strlen(words[i]);
        int palindromo = 1;
        for (int j = 0; j < lunghezza / 2; j++) {
            if (words[i][j] != words[i][lunghezza - j - 1]) {
                palindromo = 0;
                break;
            }
        }
        if (palindromo==1) {
            count++;
        }
    }
    return count;
}

// Funzione che calcola il numero totale di caratteri di tutte le stringhe
int tot_caratteri(char words[][20], int size) {
    int tot = 0;
    for (int i = 0; i < size; i++) {
        tot += strlen(words[i]);
    }
    return tot;
}

// Funzione per stampare tutte le stringhe in ordine corretto
void ordine(char words[][20], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s  ", words[i]);
    }
}

// Funzione per stampare tutte le stringhe in ordine inverso
void contrario(char words[][20], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%s  ", words[i]);
    }
}

// Funzione per stampare le stringhe invertendo anche i caratteri
void caratteri_invertiti(char words[][20], int size) {
    for (int i = size - 1; i >= 0; i--) {
        int lun = strlen(words[i]);
        for (int j = lun - 1; j >= 0; j--) {
            printf("%c", words[i][j]);
        }
        printf("  ");
    }
}