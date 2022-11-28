#include<stdio.h>

int partition(int *vet,int inicio,int fim)
{
    int esq,dir,pivo,aux;

    esq = inicio;
    dir = fim;
    pivo = vet[inicio];

    while(esq < dir){
        while(esq <= fim && vet[esq] <= pivo){
            esq++;
        }while(dir >= 0 && vet[dir] > pivo){
            dir--;
        }if(esq < dir){
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir] = aux;
        }
    }
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}

void quicksort(int *vet,int inicio,int fim)
{
    int pivo;

    if(fim > inicio){
        pivo = partition(vet,inicio,fim);
        quicksort(vet,inicio,pivo-1);
        quicksort(vet,pivo+1,fim);
    }
}


int bolha(int n, int v[])
{
    int i,j;
    int temp;

    for (i = n - 1; i >= 1; i--){
        for (j = 0; j < i; j++){
            if (v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    return 0;
}
