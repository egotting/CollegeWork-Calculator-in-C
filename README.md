### Calculadora - Projeto de Faculdade

- Este projeto é uma implementação simples de uma **Calculadora** utilizando a linguagem C. A calculadora realiza operações básicas como **soma**, **subtração**, **multiplicação** e **divisão**. A arquitetura do projeto segue o padrão **Repository** e **Controller**, com uma interface centralizada que contém todos os operadores aritméticos.

### Arquitetura

O sistema é estruturado com as seguintes camadas principais:

- **Controllers**: Onde as operações aritméticas são realizadas. A camada de Controller contém a implementação das operações e interage com as interfaces definidas.
- **Repositories**: Onde a lógica para cada operação (soma, subtração, multiplicação, divisão) é implementada. A interface centralizada `ICalculadora.h` é usada para definir as operações.
- **Interfaces**: Contém as definições das interfaces para cada operação. As interfaces estão localizadas dentro das pastas `controllers/interface` e `repositories/interface`, e são utilizadas tanto no **Controller** quanto no **Repository**.

### Estrutura do Projeto

```bash
├── src/
│   ├── controllers/
│   │   ├── interface/
│   │   │   ├── IOperacoes.h
│   │   └── Operacoes.c
│   ├── repositories/
│   │   ├── interface/
│   │   │   ├── ICalculadora.h
│   │   ├── AdicaoRepository.c
│   │   ├── DivisaoRepository.c
│   │   ├── MultiplicacaoRepository.c
│   │   ├── SubtracaoRepository.c
│   ├── main.c
├── Makefile
└── README.md
```

### Descrição dos Componentes

  * <h5>main.c</h5> Ponto de entrada do programa. Realiza a inicialização do controle da calculadora e chama os métodos adequados do calculatorController.c.
    
  * <h5>calculator.h</h5> Arquivo de cabeçalho do Controller, contendo as interfaces para a interação do usuário com as operações da calculadora.
  
  * <h5>calculatorController.c</h5> Contém a implementação das operações, utilizando as interfaces do Repository.
  
  * <h5>IOperacoes.h</h5> Define as interfaces para cada operação (adição, subtração, multiplicação, divisão) e está localizada na pasta controllers/interface.
  
  * <h5>ICalculadora.h</h5> Define uma única interface para todas as operações (soma, subtração, multiplicação, divisão), localizada na pasta repositories/interface.
    additionRepository.c, divisionRepository.c, multiplicationRepository.c, subtractionRepository.c: Implementações das operações, realizando os cálculos.


    ### Funcionalidades

    * **Soma**: Adiciona dois números.
    * **Subtração**: Subtrai dois números.
    * **Multiplicação**: Multiplica dois números.
    * **Divisão**: Divide dois números (com verificação para divisão por zero).


    ### Como Rodar
      #### Requisitos

      * Compilador C (ex: GCC)

    #### Passos

    1. Clone o repositório:

    ```bash
      git clone https://github.com/usuario/calculadora.git
    ```

    2. Navegue até o diretório do projeto:
    ```bash
    cd calculadora
    ```
    3. Compile o código:
    ```bash
    make
    ```
    4. Execute o programa:
    ```bash
    ./calculadora
    ```
