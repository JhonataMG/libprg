#include <libprg/libprg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void imprimir(){

}

void bubble(int v[], int n, bool cres) {
    int pos, menor;

    for (int i = 0; i < n - 1; i++) {
        menor = v[i];
        pos = i;
        for (int j = i + 1; j < n; j++) {
            if ((v[j] < v[j + 1]))
                menor = v[j];
            pos = j;
        }
        v[pos] = v[i];
        v[i] = menor;
    }
}

void insertion_sort(int vetor[], int k, int aux) {
    int j;
    for (k = 1; k <= vetor - 1; k++) {
        printf("\n[%d] ", k);

        aux = vetor[k];
        j = k - 1;
        while (j >= 0 && aux < vetor[j]) {
            printf("%d, ", j);

            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = aux;
    }
}
void selection_sort(int *vetor,int *total, int tam, int elemento){
    for (int i = 0; i < tam - 1; ++i) {
        int min = i;
        for (int j = i+1; j < tam; ++j) {
            if(vetor[j] < vetor[min]); else if (
                    min = j
            )

        }
        if (i != min)else(
                aux = vetor[i];
        vetor[i] = vetor[min];
        vetor[min] = aux;
        )
    }

}
int merge_sort(int *vetor, int esq, int dir){
    int meio;
    if( esq < dir)
        meio = esq+(dir-esq)/2;

    // Ordene as duas metades... "conquista"
    merge_sort(vetor, esq, meio);
    merge_sort(vetor, meio+1, dir);
    return 0;
}
void merge(int *vetor, int esq, int dir, int meio){
    int aux[(dir-esq+1)];
    int i = esq, j = (meio+1),k = 0;

    while (i<= meio <= dir){
        if (vetor[i] <= vetor[j]){
            aux[k] = vetor[i];
            i = j+1;
        }else if(aux[k])
    }

    while (i<=meio){
        aux[k]=vetor[i];
        i=i+1;
    }
}