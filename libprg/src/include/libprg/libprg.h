#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

//============================ FILA ================================//
typedef struct {
    int vetor;
    int tamanho;
} fila_t;

/** Cria uma fila */
int criar (int *vetor,int tamanho);

/** Adiciona um elemento no final da fila */
int enqueue(fila_t *fila , int elemento);

/** Remove o elemento que está no início da fila */
int dequeue(fila_t *fila);

/** Retorna o elemento que está no início da fila */
int getHead(fila_t *fila);

/** Retorna o elemento que está no final da fila */
int getTail(fila_t *fila);

/** Retorna o total de elementos na fila */
int getSize(fila_t *fila);

/** Indica se a fila está vazia ou não */
int isEmpty(fila_t *fila);

/** Indica se a fila está cheia ou não */
int isfull(fila_t *fila);

//============================PILHA===============================//

typedef struct{
    int *vetor;
    int topo;
    int tamanho;
}pilha_t;

/**  */
int vet_pilha(pilha_t *pilha);

/** Adiciona um elemento no topo da pilha */
int push(pilha_t *pilha, int elemento);

/** Remove o elemento que está no topo da pilha */
int pop(pilha_t *pilha);

/** Retorna o total de elementos na pilha */
int size_p(pilha_t tamanho);

/** Indica se a pilha está vazia ou não */
int empty_p (pilha_t *monte);

/* inicialização */
void inicializacao (pilha_t *monte);

/* EMPILAR*/
int empilhar (pilha_t *monte, char *dado);

/* DESEMPILHAR*/
int desempilhar (pilha_t *monte);

/* Exibição do elemento no topo da pilha (LastInFirstOut) */
#define pilha_dado(monte) monte->início->dado;

//============================ LISTAS SEQUENCIAL ====================================//
typedef struct ElementoLista{
    char *dado;
    struct ElementoLista *seguinte;
} Elemento;

//============================ LISTAS ENCADEADAS ===========================//

// LISTA CIRCULAR ENCADEADA NÃO ORDENADA //
typedef struct no_t{
    int dados;
    struct no_t* proximo;
} no_t;

// buscar por dados
bool buscar(no_t *inicio, int dado);

// retorna todos elementos
no_t * getelementos(no_t *inicio, int dado);

// inserir novo nó
no_t* inserir(no_t *inicio, int dado);

// excluir toda lista
void destruir(no_t *inicio);

// LISTA CIRCULAR ENCADEADA ORDENADA //

// buscar por dados
bool buscar_ord(no_t *inicio, int dado);

// inserir novo nó
no_t* inserir_ord(no_t *inicio, int dado);

// excluir toda lista
void destruir_ord(no_t *inicio);


// LISTA CIRCULAR DUPLAMENTE ENCADEADA NÃO ORDENADA //

// LISTA CIRCULAR DUPLAMENTE ENCADEADA ORDENADA //

// FILA REPRESENTADA EM UMA LISTA ENCADEADA //

// PILHA REPRESENTADA EM UMA LISTA ENCADEADA //

//==========================ALGORITIMOS DE ORDENAÇÃO=======================//

/* Particiona o vetor para ordenar */
int particiona(int vetor, int inicio, int fim);

/* Troca posição de a por b */
float trocar_posicao(int a, int b );


#endif