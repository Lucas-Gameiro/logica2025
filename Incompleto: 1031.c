#include <stdio.h>

int simular_josephus(int n, int m) {
    int regioes[101];
    for (int i = 0; i < n; i++) {
        regioes[i] = i + 1;
    }
    int pos = 0;
    int tamanho = n;
    while (tamanho > 1) {
        pos = (pos + m - 1) % tamanho;
        for (int i = pos; i < tamanho - 1; i++) {
            regioes[i] = regioes[i + 1];
        }
        tamanho--;
        if (pos == tamanho) {
            pos = 0;
        }
    }
    return regioes[0];
}

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int m = 1;
        while (simular_josephus(n, m) != 13) {
            m++;
        }
        printf("%d\n", m);
    }
    return 0;
}
