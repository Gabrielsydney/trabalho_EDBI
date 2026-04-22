#include <iostream>
#include "buscaSequencial.h" 

int buscaSequencial(int vetor[], int tamanhoVetor, int numeroEscolhido)
{
    for (int i = 0; i < tamanhoVetor; i++)
    {
        if (vetor[i] == numeroEscolhido)
        {
            return i;
        }
    }
    return -1;
}