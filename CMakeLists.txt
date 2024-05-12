cmake_minimum_required(VERSION 3.28)
project(CollegeWork_Calculator_in_C C)

set(CMAKE_C_STANDARD 11)

add_executable(CollegeWork_Calculator_in_C main.c
        Repository/DivisaoRepository.c
        Repository/interface/IOperacoes.h
        Repository/SomaRepository.c
        Repository/MultiplicacaoRepository.c
        Repository/SubtracaoRepository.c
        Controller/Operacoes.c
        Controller/IOperacoes.h
        Models/HistoricoDeContas.c
        Models/interface/IHistoricoDeConta.h
)
