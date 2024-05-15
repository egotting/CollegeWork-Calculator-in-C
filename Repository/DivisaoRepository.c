#include <stdio.h>


#include "interface/ICalculadora.h"

// Implementando a funcao Divisao da interface ICalculator
float Divisao(const float x,const float y) {
    if(y != 0) {
        return x / y;
    }else {
        printf("Error: divisao por zero \n");
        return 0.0;
    }
}