#include <stdio.h>
#include <stdlib.h>

long long custo(long long consumo) {
    long long total = 0;
    if (consumo > 1000000) {
        total += (consumo - 1000000) * 7;
        consumo = 1000000;
    }
    if (consumo > 10000) {
        total += (consumo - 10000) * 5;
        consumo = 10000;
    }
    if (consumo > 100) {
        total += (consumo - 100) * 3;
        consumo = 100;
    }
    total += consumo * 2;
    return total;
}

long long consumo_para_pagamento(long long valor) {
    long long ini = 0, fim = 1e9, meio;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        long long c = custo(meio);
        if (c == valor)
            return meio;
        else if (c < valor)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return fim;
}

int main() {
    long long A, B;
    while (scanf("%lld %lld", &A, &B) == 2 && (A || B)) {
        long long consumo_total = consumo_para_pagamento(A);
        long long ini = 0, fim = consumo_total, meio;
        long long resultado = 0;
        while (ini <= fim) {
            meio = (ini + fim) / 2;
            long long sua_conta = custo(meio);
            long long vizinho = custo(consumo_total - meio);
            long long dif = llabs(sua_conta - vizinho);
            if (dif == B) {
                resultado = sua_conta < vizinho ? sua_conta : vizinho;
                break;
            } else if (dif < B) {
                ini = meio + 1;
            } else {
                fim = meio - 1;
            }
        }
        printf("%lld\n", resultado);
    }
    return 0;
}
