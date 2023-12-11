#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no {
    int valor;
    struct  no *esquerda;
    struct  no *direita;
} no_t;


void enfileirar (no_t *raiz, int valor) {
}

no_t *criar_no (int valor) {
    no_t *no = (no_t*) malloc(sizeof(no_t));
    no->valor = valor;
    no-> esquerda = no->direita = NULL;
    return no;
}

void destruir_no (no_t *no) {
    if (no != NULL) {
        destruir_no(no->esquerda);
        destruir_no(no->direita);
        free(no);
    }
}

no_t  *inserir_valor (no_t *raiz, int valor) {
    if(raiz == NULL) {
        return criar_no(valor);
    } else if (valor < raiz->valor) {
        raiz->esquerda = inserir_valor(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir_valor(raiz->esquerda, valor);
    }
    return raiz;
}

no_t *remover_valor (no_t *raiz, int valor) {
    if (raiz == NULL) return raiz;
    if (valor < raiz->valor) {
        raiz->esquerda = remover_valor(raiz , valor);
    } else if (valor > raiz->valor) {
        raiz->direita = remover_valor(raiz, valor);
    } else {
        // nó com dois filhos
        // if nó folha ou nó com um filho
    }
    return raiz;
}

bool busca(no_t *raiz, int valor) {
    if (raiz == NULL) return false;
    if (valor == raiz->valor) return true;
    if (valor < raiz->valor) return busca(raiz->esquerda, valor);
    return busca(raiz->direita, valor);
}
void imprimir(no_t *raiz);

void inorder(no_t *raiz) {
    if (raiz != NULL) {
        inorder(raiz->esquerda);
        printf("%d ", raiz->valor);
        inorder(raiz->direita);
    }
}

void percurso_largura (no_t *raiz) {
    while (raiz != NULL) {
        printf("%d",raiz->valor);
    } if (raiz->esquerda != NULL){
        enfileirar(raiz->esquerda);
    } if (raiz->direita != NULL){
        enfileirar(raiz->direita);
    }
    return;
}

int main() {
    no_t *raiz = NULL;
    int n = 10;
    /** printf("Insira uma qts de nós: \n");
    scanf("%n",&n); **/
    for (int i = 0; i < n; ++i) {
        int nrand = rand() %100 +1;
        raiz = inserir_valor(raiz, nrand);
    }
    inorder(raiz);
    return 0;
}