#include <iostream>
#include "buscaBinaria.h"

int buscaBinaria(int vetor[], int tamanhoVetor, int numeroEscolhido)
{
    int inicio = 0, fim = tamanhoVetor - 1;
    while(inicio <= fim)
    {
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == numeroEscolhido)
        {
            return meio;
        }
        else if (vetor[meio] < numeroEscolhido)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }
    return -1;
}