
#ifndef _DEFINE_H_
#define _DEFINE_H_

//defining the macro that calculates the penalty for delays in payments
#define penalty_calc(x)  x*0.1

//defining a limit for the total expense
#define exp_limit 100.00f

//macro per abilitare la compilazione di quella parte di codice
#define ABILITA_CALC_PENALE
// #undef ABILITA_CALC_PENALE // da quel punto in poi non viene più utilizzata 

#define DEBUG //quando c'e questa costante vengono stampate le condizioni aggiuntive per fare debug
#undef DEBUG

#ifdef DEBUG
#define DEBUG_PRINT(x) printf("[DEBUG] - %s\n", x); //stampa informazione di debug
#else 
#define DEBUG_PRINT(x)
#endif //DEBUG

#endif //_DEFINE_H_
//serve per non prendere più volte la define(compilarla una volta sola), che può essere usato in più file