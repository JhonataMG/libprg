#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

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

/**  */
int vet_pilha(pilha_t *pilha);

/** Adiciona um elemento no topo da pilha */
int push(pilha_t *pilha, int elemento);

/** Remove o elemento que está no topo da pilha */
int pop(pilha_t *pilha);

/** Retorna o total de elementos na pilha */
int size_p(pilha_t pilha);

/** Indica se a pilha está vazia ou não */
int empty_p(pilha_t pilha);


#endif