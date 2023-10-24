#include <libprg/libprg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void imprimir(){
    printf("%d\n", )
}

void bubble(int v[], int n, bool cres){
    int pos, menor;

    for (int i = 0; i < n-1; i++) {
        menor = v[i];
        pos = i;
        for (int j = i+1; j < n; j++) {
            if ((v[j] < v[j+1]))
                menor = v[j];
            pos = j;
        }
        v[pos] = v[i];
        v[i] = menor;
    }


    void insertion_sort(int vetor[], int k, int aux) {
        int j;
        for (k = 1; k <= vetor - 1; k++){
            printf("\n[%d] ", k);

            aux = vetor[k];
            j = k - 1;
            while (j >= 0 && aux < vetor[j]) {
                printf("%d, ", j);

                vetor[j+1] = vetor[j];
                j--;
            }

            vetor[j+1] = aux;
        }

    void selection_sort(int *vetor,int *total, int tam, int elemento){
            for (int i = 0; i < tam - 1; ++i) {
                min = i;
                for (int j = i+1; j < tam; ++j) {
                    if(vetor[j] < vetor[min]) else (
                            min = j;
                    )

                }
                if (i != min) else(
                        aux = vetor[i];
                vetor[i] = vetor[min];
                vetor[min] = aux;
                )
            }

