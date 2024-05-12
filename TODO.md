# Calculator

# Interface

    [*] funcao de soma
    [*] funcao de subtracao 
    [*] Funcao de mutiplicacao
    [*] Funcao de divisao

# Implementar interface

    [] implementando funcao de soma
    [] implementando funcao de subtracao 
    [] implementando Funcao de mutiplicacao
    [] implementando Funcao de divisao

Claro! Criar um hashmap (ou tabela de dispersão) em C é uma tarefa interessante. Vou explicar os conceitos básicos e
fornecer um exemplo simples para você.

Existem várias maneiras de implementar um hashmap em C, mas vou abordar duas abordagens comuns:

    Separate Chaining (Encadeamento Separado):
        Nessa abordagem, você cria um array de “baldes” (geralmente listas encadeadas) para armazenar os pares chave-valor.
        Quando você insere um elemento, calcula o hash da chave e encontra o índice do array correspondente.
        Se houver colisão (ou seja, duas chaves têm o mesmo índice), você adiciona o novo par à lista encadeada.
        A busca também envolve calcular o hash, encontrar o índice e percorrer a lista encadeada para encontrar o valor associado à chave.

    Open Addressing (Endereçamento Aberto):
        Nessa abordagem, você aloca um único array com espaço extra para resolver colisões.
        Quando ocorre uma colisão, você procura o próximo slot disponível no array (usando uma função de sondagem) e insere o novo par lá.
        A busca também envolve calcular o hash e procurar no array até encontrar o valor associado à chave.

Aqui está um exemplo simples de como criar um hashmap usando encadeamento separado:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de um par chave-valor
typedef struct {
char* key;
int value;
} Pair;

// Definição do hashmap
typedef struct {
Pair** buckets; // Lista de ponteiros para pares
unsigned int capacity; // Capacidade (tamanho do array)
unsigned int size; // Número de pares no hashmap
} HashMap;

// Função para criar um hashmap vazio
HashMap* createHashMap(unsigned int capacity) {
HashMap* hm = malloc(sizeof(HashMap));
hm->capacity = capacity;
hm->size = 0;
hm->buckets = calloc(capacity, sizeof(Pair*));
return hm;
}

// Função para calcular o hash da chave (pode ser mais complexa)
unsigned int hash(const char* key) {
// Implemente sua própria função de hash aqui
// Por simplicidade, usaremos apenas o comprimento da chave
return strlen(key) % 10;
}

// Função para inserir um par chave-valor no hashmap
void insert(HashMap* hm, const char* key, int value) {
unsigned int index = hash(key);
Pair* newPair = malloc(sizeof(Pair));
newPair->key = strdup(key);
newPair->value = value;
newPair->next = hm->buckets[index];
hm->buckets[index] = newPair;
hm->size++;
}

// Função para buscar o valor associado a uma chave
int get(HashMap* hm, const char* key) {
unsigned int index = hash(key);
Pair* current = hm->buckets[index];
while (current) {
if (strcmp(current->key, key) == 0) {
return current->value;
}
current = current->next;
}
return -1; // Chave não encontrada
}

// Função para liberar a memória do hashmap
void destroyHashMap(HashMap* hm) {
for (unsigned int i = 0; i < hm->capacity; i++) {
Pair* current = hm->buckets[i];
while (current) {
Pair* next = current->next;
free(current->key);
free(current);
current = next;
}
}
free(hm->buckets);
free(hm);
}

int main() {
HashMap* myMap = createHashMap(10);
insert(myMap, "apple", 42);
insert(myMap, "banana", 17);

    printf("Value for 'apple': %d\n", get(myMap, "apple"));
    printf("Value for 'banana': %d\n", get(myMap, "banana"));

    destroyHashMap(myMap);
    return 0;

}

Lembre-se de que essa é uma implementação básica. Em um cenário real, você pode precisar otimizar a função de hash,
lidar com colisões de maneira mais sofisticada e considerar a reorganização do hashmap quando ele fica muito cheio.
Espero que isso ajude! 😊
