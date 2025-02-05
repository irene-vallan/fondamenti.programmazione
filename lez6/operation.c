#include "compito_062.h"
#include "operation.h"

float sum_positive_number(float *matrix, int ROWS, int COLS){ //non da delle misure specifiche della matrice
//definendo altri int generici per le righe e colonne è la definizione più generale possibile
float sumP=0;
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; ++j) {
            float f=*(matrix +(i*ROWS+j));
            if(f>=0) {
                sumP +=f;
            } 
        }
    }

    return sumP;
}