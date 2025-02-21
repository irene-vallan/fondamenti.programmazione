// Definisca questa matrice 3x4 di numeri in virgola mobile (float) e la inizializzi staticamente nel codice:
//  
// 
//   1.5  -6.8   10.0
//  -3.2   7.1  -11.3
//   4.0  -8.4   12.6
//   5.5   9.9  -13.7
// 
// Calcoli e stampi:
//  La somma di tutti i numeri positivi presenti nella matrice.
//  La somma di tutti i numeri negativi presenti nella matrice.
//  Il valore massimo e il valore minimo della matrice.
//  Il numero di elementi pari e il numero di elementi dispari (considerando solo la parte intera del numero).
// Stampi un messaggio se tutti i numeri nella matrice sono positivi o tutti negativi.
// Stampi un messaggio se almeno un numero è multiplo di 5 (considerando solo la parte intera del numero).

#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include "compito_062.h"
#include "operation.c"

int main() {
    float matrix [rows][cols] = {
        {1.5,  -6.8,   10.0},
        {-3.2,   7.1,  -11.3},
        {4.0,  -8.4,   12.6},
        {5.5,   9.9,  -13.7}
    };

    /*float sumP=0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f>=0) {
                sumP +=f;
            } 
        }
    }*/

   float  sumP=sum_positive_number (*matrix, rows, cols);

    float sumN=0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f<0) {
                sumN +=f;
            } 
        }
    }

    printf ("\n--SOMMA VALORI POSITIVI--");
    printf("\nsomma: %.2f", sumP);

    printf("\n--SOMMA VALORI NEGATIVI--");
    printf("\nsomma: %.2f", sumN);
    
    float max=FLT_MIN_EXP;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f>max) {
                max=f;
            } 
        }
    }
    printf("\n\nNumero maggiore: %.2f", max);

    float min=FLT_MAX_EXP;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f<min) {
                min=f;
            } 
        }
    }
    printf("\nNumero minore: %.2f", min);

    int num_pari=0;
    int num_dis=0;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            int f=matrix[i][j];  //int considera solo la parte intera
            bool isEven= ((f%2)==0);
            if(isEven) {
                num_pari++;
            } 
            else {
                num_dis++;
            }
        }
    }
    printf("\n\nQuantità di numeri pari: %d", num_pari);
    printf("\nQuantità di numeri dispari: %d", num_dis);


    bool tuttiP=true;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f<0) {
                tuttiP=false;
                break;
            } 
        }
    }
    if(tuttiP) {
        printf("\nTutti i numeri sono positivi!");
    }
    
    bool tuttiN=true;
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; ++j) {
            float f=matrix[i][j];
            if(f>=0) {
                tuttiN=false;
                break;
            } 
        }
    }
    if(tuttiN) {
        printf("\nTutti i numeri sono negativi!");
    }


    printf("\n\n");
    return 0;
}