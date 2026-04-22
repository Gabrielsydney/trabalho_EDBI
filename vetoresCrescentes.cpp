void vetoresCrescentes(int v[], int tamanho, int i) {
    if (i == tamanho) return;

    v[i] = i + 1;
    vetoresCrescentes(v, tamanho, i + 1);
} 