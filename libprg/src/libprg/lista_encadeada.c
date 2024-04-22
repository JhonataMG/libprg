#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
    int dado;
    struct no* proximo;
} no_t;

void adicionar(no_t* *inicio, int dado){
    no_t* novo = malloc(sizeof(no_t));
    novo->dado = dado;
    novo->proximo = *inicio;
    *inicio = novo;
}

bool remover (no_t* *inicio, int elemento){
    no_t* atual= *inicio;
    no_t* anterior = NULL;

    while (atual != NULL){
        if (atual->dado == elemento){
            // para o primeiro elemento da lista
            if (anterior == NULL){
                *inicio = atual->proximo;
            }else{ // para os demais elementos
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return true;
        }
        anterior = atual;
        atual = atual->proximo;
    }
    return false;
}

void limpar(no_t* *inicio){
    no_t* atual = *inicio;
    no_t* proximo = NULL;
    while (atual !=NULL){
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
    *inicio = NULL;
}

//============================== ORDENADO ================

void inserir_ord (no_t* *inicio, int dado){
    no_t* novo = malloc(sizeof(no_t));
    novo->dado = dado;
    novo->proximo = *inicio;
    *inicio = novo;

    if (*inicio == NULL || (*inicio)->dado >= dado) {
        novo->proximo = *inicio;
    } else {
        no_t* atual = *inicio;
        if (atual->dado < dado) {
            novo->proximo = atual->proximo;
            atual->proximo = novo;
        } else {
            atual = atual->proximo;
        }
        while (atual->proximo != NULL && atual->proximo->dado < dado) {
            atual = atual->proximo;
        }
        novo->proximo = atual->proximo;
        atual->proximo = novo;
    }
}

void remover_ord (no_t* *inicio, int elemento){
    no_t* atual = *inicio;
    no_t* anterior = NULL;

    while (atual != NULL && atual->dado != elemento){
        anterior = atual;
        atual = atual->proximo;
    }
    if (atual == NULL) {
        printf("Não existe.\n");
        return;
    }
    if (anterior == NULL) {
        *inicio = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }
    free(atual);
}
//===========================================================================
int main() {

/*
    no_t primeiro;
    no_t segundo;
    no_t terceiro;

    primeiro.dado = 1;
    primeiro.proximo = NULL;

    segundo.dado = 2;
    segundo.proximo = NULL;

    terceiro.dado = 3;
    terceiro.proximo = NULL;

    primeiro.proximo = &segundo;
    segundo.proximo = &terceiro;
*/
    no_t  *inicio = NULL;

    inserir_ord(&inicio, 3);
    inserir_ord(&inicio, 2);
    inserir_ord(&inicio, 1);
    inserir_ord(&inicio, 4);

    remover_ord(&inicio,2);

    while (inicio !=NULL){
        printf("%d\n",inicio->dado);
        inicio = inicio->proximo;
    }

    limpar(&inicio);

    return 0;
}
