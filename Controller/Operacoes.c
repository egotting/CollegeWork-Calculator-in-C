#include <stdio.h>
#include <stdlib.h>
#include "..//Repository/interface/IOperacoes.h"
#include "../Models/interface/IHistoricoDeConta.h"
#include "IOperacoes.h"


void Operacoes() {
    float *x, *y;
    char operador;

    x = (float *) malloc(sizeof(float));
    y = (float *) malloc(sizeof(float));


    printf(" ________________________________________________________ \n");
    printf("|                                                        |\n");
    printf("|     Selecione o operador que irá utilizar, apenas      |\n");
    printf("|       Apertando a inicial da palavra e pressio..       |\n");
    printf("|           nar o ENTER para continuar ou 'P'            |\n");
    printf("|               para parar a aplicacao.                  |\n");
    printf("|                                                        |\n");
    printf("|     [A]dição [S]ubtração [M]ultiplicação [D]ivisão     |\n");
    printf("|                      [P]arar                           |\n");
    printf("|________________________________________________________|\n");
    scanf("%c", &operador);


    if (operador == 'P' || operador == 'p') {
        exit(EXIT_SUCCESS);
    } else if (operador == 'A' || operador == 'a') {
        printf(" ____________________________________________________\n");
        printf("           Operador aritmético: Adição\n");
        printf(" ----------------------------------------------------\n");
    } else if (operador == 'S' || operador == 's') {
        printf(" ____________________________________________________\n");
        printf("           Operador aritmético: Subtração            \n");
        printf(" ----------------------------------------------------\n");
    } else if (operador == 'M' || operador == 'm') {
        printf(" ____________________________________________________\n");
        printf("           Operador aritmético: Multiplicação        \n");
        printf(" ----------------------------------------------------\n");
    } else if (operador == 'D' || operador == 'd') {
        printf(" ____________________________________________________\n");
        printf("           Operador aritmético: Divisão              \n");
        printf(" ----------------------------------------------------\n");
    }

    printf("Digite um numero que quer ser calculado: ");
    scanf("%f", x);
    if (operador == 'P' || operador == 'p') {
        exit(EXIT_SUCCESS);
    }

    printf("Digite um segundo numero que quer ser calculado: ");
    scanf("%f", y);
    if (operador == 'P' || operador == 'p') {
        exit(EXIT_SUCCESS);
    }


    switch (operador) {
        case 'a':
        case 'A':
            printf("Resultado do calculo: %.2f\n", Somar(*x, *y));
            break;
        case 's':
        case 'S':
            printf("Resultado do calculo: %.2f\n", Subtracao(*x, *y));
            break;
        case 'm':
        case 'M':
            printf("Resultado do calculo: %.2f\n", Multiplicacao(*x, *y));
            break;
        case 'd':
        case 'D':
            printf("Resultado do calculo: %.2f\n", Divisao(*x, *y));
            break;
        default:
            printf("operador invaldo\n");
            break;
    }

    dict_add();

    free(x);
    free(y);

}
