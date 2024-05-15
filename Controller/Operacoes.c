#include <ctype.h>
#include <stdio.h> // chamando um header do C que eu consigo chamar funcoes especificas como ex: printf e scanf
#include <stdlib.h> // chamando um header do C que eu consigo chamar funcoes especificas como ex: malloc e free
#include "..//Repository/interface/ICalculadora.h" // chamando o arquivo ICalculadora.h
#include "../Controller/interface//IOperacoes.h" // chamando o arquivo IOperacoes.h

// Implementando a função do header
void Operacoes() {
    /*
       * Criando um ponteiro para os valores x e y:
            - está criando um ponteiro para armazenar os valores de x e y.
              Isso permitirá que você acesse e manipule esses valores posteriormente.
     */
    float *x, *y;


    /*
       * Criando uma variável “operador” para armazenar a operação utilizada:
            - está declarando uma variável chamada “operador”.
              Essa variável será usada para armazenar a operação (como adição, subtração, multiplicação etc.)
              que o usuário deseja realizar.
    */
    char operador;




    /*
        * Declarando a variável “x” e "y" dentro da memória:
            - está reservando espaço na memória para a variável “x” e "y".
              Isso permitirá que você armazene um valor nessa variável.
    */
    x = malloc(sizeof(float));
    y = malloc(sizeof(float));


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
    scanf("%c", &operador); // scanf e uma funcao chamada do header: stdlib.h



    /*
       * Verificação do operador utilizado e impressão na tela:
          - Aqui, você está verificando qual operador o usuário está utilizando (com base na entrada) e
            imprimindo-o na tela. Por exemplo, se o usuário inserir “+” como operador, você deve exibir “Adição”.
    */



    /*
        * Tratamento de operadores inexistentes:
           - Se o usuário inserir um operador que não existe (por exemplo, “&”), você deve imprimir uma mensagem informando que o operador não é válido.
    */
    switch (tolower(operador)) {
        case 'p':
            exit(EXIT_SUCCESS);// Se o usuário inserir “P” ou “p”, a aplicação deve parar. Isso pode ser uma forma
                                    // de encerrar o programa.
        case 'a': // 'a' vai imprimir Adição
            printf(" ____________________________________________________\n");
            printf("           Operador aritmético: Adição\n");
            printf(" ----------------------------------------------------\n");
            break;
        case 's':// 's' vai imprimir Subtração
            printf(" ____________________________________________________\n");
            printf("           Operador aritmético: Subtração            \n");
            printf(" ----------------------------------------------------\n");
            break;
        case 'm':// 'm' vai imprimir Multiplicação
            printf(" ____________________________________________________\n");
            printf("           Operador aritmético: Multiplicação        \n");
            printf(" ----------------------------------------------------\n");
            break;
        case 'd':// 'd' vai imprimir Divisão
            printf(" ____________________________________________________\n");
            printf("           Operador aritmético: Divisão              \n");
            printf(" ----------------------------------------------------\n");
            break;
        default: // Se o usuário inserir um operador que não existe (por exemplo, “&”), você deve imprimir uma mensagem informando que o operador não é válido.
            printf("operador invaldo\n");
            break;
    }




    /*
        * Leitura do número que o cliente deseja calcular:
           - Nesta parte, você está lendo um número fornecido pelo cliente para realizar o cálculo.
    */
    printf("Digite um numero que quer ser calculado: ");
    scanf("%f", x);
    switch (tolower(operador)) {
        case 'p':
            exit(EXIT_SUCCESS);
        default:
            break;
    }

    /*
        * Leitura do número que o cliente deseja calcular:
           - Nesta parte, você está lendo um número fornecido pelo cliente para realizar o cálculo.
    */
    printf("Digite um segundo numero que quer ser calculado: ");
    scanf("%f", y);
    switch (tolower(operador)) {
        case 'p':
            exit(EXIT_SUCCESS);
        default:
            break;
    }



    /*
        * Realização da operação (soma) com base no operador selecionado:
           - Dependendo do operador inserido pelo usuário (por exemplo, “A” para adição),
             você deve chamar a função correspondente (neste caso, a função de adição) e
             calcular o resultado usando os valores de x e y.
    */
    switch (tolower(operador)) {
        case 'a':
            printf("Resultado do calculo: %.2f\n", Adicao(*x, *y));
            break;
        case 's':
            printf("Resultado do calculo: %.2f\n", Subtracao(*x, *y));
            break;
        case 'm':
            printf("Resultado do calculo: %.2f\n", Multiplicacao(*x, *y));
            break;
        case 'd':
            printf("Resultado do calculo: %.2f\n", Divisao(*x, *y));
            break;
        default:
            printf("operador invaldo\n");
            break;
    }
    // Aqui está liberando a memória que foi alocada para armazenar os números que o cliente forneceu.
    free(x);
    free(y);

}
