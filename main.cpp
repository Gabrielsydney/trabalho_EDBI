#include <iostream>
#include <chrono>

#include "buscaBinaria.h"
#include "buscaSequencial.h"
#include "vetores.h"
#include "vetoresCrescentes.h"
using namespace std;

void vetores(int v[], int tamanho, int i);

int main()
{
    int buscaCem[100];
    int buscaMil[1000];
    int buscaDezMil[10000];
    int buscaVinteMil[20000];

    vetores(buscaCem, 100, 0);
    vetores(buscaMil, 1000, 0);
    vetores(buscaDezMil, 10000, 0);
    vetores(buscaVinteMil, 20000, 0);

    int tamanhoCem = sizeof(buscaCem) / sizeof(buscaCem[0]);
    int tamanhoMil = sizeof(buscaMil) / sizeof(buscaMil[0]);
    int tamanhoDezMil = sizeof(buscaDezMil) / sizeof(buscaDezMil[0]);
    int tamanhoVinteMil = sizeof(buscaVinteMil) / sizeof(buscaVinteMil[0]);

    // ________________ Tempo de Execução para 100 Elementos ________________
    cout << "Posicao do 1 no vetor 100: ";
    auto inicioSeqCem = std::chrono::high_resolution_clock::now();
    int seq100 = buscaSequencial(buscaCem, tamanhoCem, 1);
    auto finalSeqCem = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> seqExecucaoCem{finalSeqCem - inicioSeqCem};
    cout << seq100 << endl;

    // ________________ Tempo de Execução para 1000 Elementos ________________
    cout << "Posicao do 1 no vetor de 1000: ";
    auto inicioSeqMil = std::chrono::high_resolution_clock::now();
    int seq1000 = buscaSequencial(buscaMil, tamanhoMil, 1);
    auto finalSeqMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> seqExecucaoMil{finalSeqMil - inicioSeqMil};
    cout << seq1000 << endl;

    // ________________ Tempo de Execução para 10000 Elementos ________________
    cout << "Posicao do 1 no vetor de 10000: ";
    auto inicioSeqDezMil = std::chrono::high_resolution_clock::now();
    int seq10000 = buscaSequencial(buscaDezMil, tamanhoDezMil, 1);
    auto finalSeqDezMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> seqExecucaoDezMil{finalSeqDezMil - inicioSeqDezMil};
    cout << seq10000 << endl;

    // ________________ Tempo de Execução para 20000 Elementos ________________
    cout << "Posicao do 1 no vetor de 20000: ";
    auto inicioSeqVinteMil = std::chrono::high_resolution_clock::now();
    int seq20000 = buscaSequencial(buscaVinteMil, tamanhoVinteMil, 1);
    auto finalSeqVinteMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> seqExecucaoVinteMil{finalSeqVinteMil - inicioSeqVinteMil};
    cout << seq20000 << endl;

    cout << endl;
    cout << "Busca Sequencial vetor de 100: " << seqExecucaoCem.count() << " milissegundos" << endl;
    cout << "Busca Sequencial vetor de 1000: " << seqExecucaoMil.count() << " milissegundos" << endl;
    cout << "Busca Sequencial vetor de 10000: " << seqExecucaoDezMil.count() << " milissegundos" << endl;
    cout << "Busca Sequencial vetor de 20000: " << seqExecucaoVinteMil.count() << " milissegundos" << endl;

    cout << endl;

    vetoresCrescentes(buscaCem, 100, 0);
    vetoresCrescentes(buscaMil, 1000, 0);
    vetoresCrescentes(buscaDezMil, 10000, 0);
    vetoresCrescentes(buscaVinteMil, 20000, 0);

    // Busca Binária

    // ________________ Tempo de Execução para 100 Elementos ________________
    cout << "Posicao do 100 no vetor 100: ";
    auto inicioBinCem = std::chrono::high_resolution_clock::now();
    int bin100 = buscaBinaria(buscaCem, tamanhoCem, 100);
    auto finalBinCem = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> binExecucaoCem{finalBinCem - inicioBinCem};
    cout << bin100 << endl;

    // ________________ Tempo de Execução para 1000 Elementos ________________
    cout << "Posicao do 1000 no vetor de 1000: ";
    auto inicioBinMil = std::chrono::high_resolution_clock::now();
    int bin1000 = buscaBinaria(buscaMil, tamanhoMil, 1000);
    auto finalBinMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> binExecucaoMil{finalBinMil - inicioBinMil};
    cout << bin1000 << endl;

    // ________________ Tempo de Execução para 10000 Elementos ________________
    cout << "Posicao do 10000 no vetor de 10000: ";
    auto inicioBinDezMil = std::chrono::high_resolution_clock::now();
    int bin10000 = buscaBinaria(buscaDezMil, tamanhoDezMil, 10000);
    auto finalBinDezMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> binExecucaoDezMil{finalBinDezMil - inicioBinDezMil};
    cout << bin10000 << endl;

    // ________________ Tempo de Execução para 20000 Elementos ________________
    cout << "Posicao do 20000 no vetor de 20000: ";
    auto inicioBinVinteMil = std::chrono::high_resolution_clock::now();
    int bin20000 = buscaBinaria(buscaVinteMil, tamanhoVinteMil, 20000);
    auto finalBinVinteMil = std::chrono::high_resolution_clock::now();
    chrono::duration<double, std::milli> binExecucaoVinteMil{finalBinVinteMil - inicioBinVinteMil};
    cout << bin20000 << endl;

    cout << endl;
    cout << "Busca Binaria vetor de 100: " << binExecucaoCem.count() << " milissegundos" << endl;
    cout << "Busca Binaria vetor de 1000: " << binExecucaoMil.count() << " milissegundos" << endl;
    cout << "Busca Binaria vetor de 10000: " << binExecucaoDezMil.count() << " milissegundos" << endl;
    cout << "Busca Binaria vetor de 20000: " << binExecucaoVinteMil.count() << " milissegundos" << endl;

    return 0;
}