#include <stdio.h>

long long calcula_linhas(long long n) {
    long long ini = 0, fim = 2000000000, meio;
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        long long soma = meio * (meio + 1) / 2;
        if (soma == n) return meio;
        if (soma < n)
            ini = meio + 1;
        else
            fim = meio - 1;
    }
    return fim;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", calcula_linhas(n));
    }
    return 0;
}
