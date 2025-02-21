#include <iostream>
using namespace std; //per non riscrivere std ogni volta che chiamo una funzione

#define ENDLN std::cout << std::endl << std::endl

//funzione cortissima che il compilatore tratta per renderla il più veloce possibile
//è al posto delle macro di c
inline void end_ln() { std::cout << std::endl << std::endl;}

int main() {
    cout <<"hello word!!"<< endl;

        ENDLN;
        end_ln();

    return 0;
}