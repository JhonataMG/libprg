#include <stdlib.h>
#include <stdio.h>

typedef struct no_avl {
    int valor;
    int altura;
    // altura da subárvore
    struct no *esquerda;
    struct no *direita;
} no_avl_t;

// retorna a altura da subárvore
int altura(no_avl_t *v) {
if (v == NULL) {
return 0;
} else {
return v->altura;
}
}
// negativo se a subárvore direita for maior
int fator_balanceamento(no_avl_t *v) {
if (v == NULL) {
return 0;
} else {
return altura(v->esquerda) - altura(v->
direita);
}
}

#define max(a,b) (((a) > (b)) ? (a) : (b))
// v é o nó desregulado (6) na figura ao lado


no_avl_t *rotacao_esquerda(no_avl_t *v) {
// u é (7) na figura ao lado
no_avl_t *u = v->direita;
// filho direito de v será o filho esquerdo de u (8)
v->direita = u->esquerda;
// filho esquerdo de u será v (6)
u->esquerda = v;
// atualiza a altura de v
v->altura = max(altura(v->esquerda), altura(v->direita)) + 1;
// atualiza a altura de u
u->altura = max(altura(u->esquerda), altura(u->direita)) + 1;
// retorna o novo nó raiz da subárvore
return u;
}

no_avl_t *rotacao_direita(no_avl_t *v) {
// u é (7) na figura ao lado
    no_avl_t *u = v->direita;
// filho direito de v será o filho esquerdo de u (8)
    v->direita = u->esquerda;
// filho esquerdo de u será v (6)
    u->esquerda = v;
// atualiza a altura de v
    v->altura = max(altura(v->esquerda), altura(v->direita)) + 1;
// atualiza a altura de u
    u->altura = max(altura(u->esquerda), altura(u->direita)) + 1;
// retorna o novo nó raiz da subárvore
    return u;
}


// v é o nó desregulado (20) na figura ao lado
no_avl_t *rotacao_dupla_direita(no_avl_t *v) {
// rotação simples à esquerda no filho esquerdo de v
v->esquerda = rotacao_esquerda(v->esquerda);
// rotação simples à direita em v
return rotacao_direita(v);
}

no_avl_t *rotacao_dupla_esquerda(no_avl_t *v) {
// rotação simples à esquerda no filho esquerdo de v
    v->esquerda = rotacao_esquerda(v->esquerda);
// rotação simples à direita em v
    return rotacao_direita(v);
}

no_avl_t *balancear(no_avl_t *v) {
int fb = fator_balanceamento(v);
if (fb > 1){// nó desregulado tem filho desregulado à esquerda
if (fator_balanceamento(v->esquerda) > 0) {
// caso esquerda−esquerda
return rotacao_direita(v);
} else {
// caso esquerda−direita
return rotacao_dupla_direita(v);
}
} else if (fb < -1) { // nó desregulado tem filho desregulado à direita
if (fator_balanceamento(v->direita) < 0) {
// caso direita−direita
return rotacao_esquerda(v);
} else {
// caso direita−esquerda
return rotacao_dupla_esquerda(v);
}
}
return v;
}

no_avl_t *inserir(no_avl_t *v, int valor) {
if (v == NULL) {
v = criar_no(valor);
} else if (valor < v->valor) {
v->esquerda = inserir(v->esquerda, valor);
} else if (valor > v->valor) {
v->direita = inserir(v->direita, valor);
}
v->altura= 1 + max(altura(v->esquerda), altura(v->direita));
v = balancear(v); // é necessário balancear após cada inserção
return v;
}