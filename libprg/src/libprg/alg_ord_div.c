#include <libprg/libprg.h>
#include <stdio.h>
#include <stdlib.h>

int particiona(int vetor, int inicio, int fim);

int merge_sort(int vetor, int esq, int dir){
    int meio;
    if( esq < dir)
        meio = esq+(dir-esq)/2;

    // Ordene as duas metades... "conquista"
    merge_sort(vetor, esq, meio);
    merge_sort(vetor, meio+1, dir);
    return vetor;
}
void merge(int *vetor, int esq, int dir, int meio){
    // Criando vetor aux vazio
    int aux[(dir-esq+1)];
    int i = esq, j = (meio+1),k = 0;

    while (i <= meio <= dir)
        if (vetor[i] <= vetor[j]) {
            aux[k] = vetor[i];
            i = j + 1;
        } else {
            aux[k] = vetor[i];
            j = j+1;
        } k= k+1;

    while (i <= meio) {
        aux [k] = vetor[i];
        i = i+1;
        k = k+1;
    }

    while ( j <= dir) {
        aux[k] = vetor[j];
        j = j+1;
        k = k+1;
    }
    for (int i = esq; i <= dir; ++i) {
        vetor[i] = aux[i-esq];
    }
    
}
int quicksort (int vetor, int inicio, int fim) {
   int p;
    if (inicio < fim) {
         p = particiona(vetor, inicio, fim);
        quicksort(vetor, inicio, p-1);
        quicksort(vetor, p+1, fim);
    }


}

int particiona(int vetor, int inicio, int fim) {
    return 0;
}
