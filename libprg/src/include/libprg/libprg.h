#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H
#include <stdbool.h>

typedef struct {
    int vetor;
    int tamanho;
} fila_t;


/** Adiciona um elemento no final da fila */
int enqueue(fila_t *fila , int elemento);

/** Remove o elemento que está no início da fila */
int dequeue(fila_t *fila);

/** Retorna o elemento que está no início da fila */
int head(fila_t *fila);

/** Retorna o elemento que está no final da fila */
int tail(fila_t *fila);

/** Retorna o total de elementos na fila */
int size(fila_t *fila);

/** Indica se a fila está vazia ou não */
int empty(fila_t *fila);

/** Indica se a fila está cheia ou não */
int full(fila_t *fila);

typedef struct ElementoLista{
    char *dado;
    struct ElementoLista *seguinte;
} Elemento;

typedef struct {
    Elemento *inicio;
    int tamanho;
} pilha_t;

/**  */
int vet_pilha(pilha_t *pilha);

/** Adiciona um elemento no topo da pilha */
int push(pilha_t *pilha, int elemento);

/** Remove o elemento que está no topo da pilha */
int pop(pilha_t *pilha);

/** Retorna o total de elementos na pilha */
int size_p(pilha_t tamanho);

/** Indica se a pilha está vazia ou não */
void empty_p (pilha_t *monte);



/* inicialização */
void inicializacao (pilha_t *monte);

/* EMPILAR*/
int empilhar (pilha_t *monte, char *dado);

/* DESEMPILHAR*/
int desempilhar (pilha_t *monte);

/* Exibição do elemento no topo da pilha (LastInFirstOut) */
#define pilha_dado(monte) monte->início->dado;


/* LISTAS ENCADEADAS */

/* Lista circular encadeada não ordenada */
typedef struct no_t{
    int dados;
    struct no_t* proximo;
} no_t;

// criar uma lista
no_t* criar(int dado);

// buscar por dados
bool buscar(no_t *inicio, int dado);

// inserir novo nó
no_t* inserir(no_t *inicio, int dado);

// excluir toda lista
void destruir(no_t *inicio);

/* Lista circular encadeada ordenada */
// criar uma lista
no_t* criar(int dado);

// buscar por dados
bool buscar(no_t *inicio, int dado);

// inserir novo nó
no_t* inserir(no_t *inicio, int dado);

// excluir toda lista
void destruir(no_t *inicio);


/* Lista circular duplamente encadeada não ordenada */
/* Lista circular duplamente encadeada ordenada */

/* Fila representada em uma lista encadeada */

/* Pilha representada em uma lista encadeada */

#endif