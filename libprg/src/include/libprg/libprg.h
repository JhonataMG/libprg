#ifndef LIBPRG_LIBPRG_H
#define LIBPRG_LIBPRG_H

typedef struct{
    int v;
    int tam [100];
} pessoa_t;

/** Cria um novo vetor */
int criar (int v, int tam);

/** insere um linearmente */
int inserir (int v, int tam);

/** insere de forma ordenada */
int inserir_o (int v, int tam);

/** busca linearmente no v */
int busca_lin (int v, int tam);

/** busca binaria no v */
int busca_bin (int v, int tam);

/** */
int remover ();

/** */
int remover_o ();

/** */
int limpa_men ();

/** Adiciona um elemento no topo da pilha */
int push (int v, int tam);

/** Remove o elemento que está no topo da pilha */
int pop (int v, int tam);

/** Retorna o total de elementos na pilha */
int size_p (int tam);

/** Indica se a pilha está vazia ou não */
int empty_p (int tam);

#endif
