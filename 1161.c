#include <stdio.h>
 
long long fatorial(int n) {
    if (n == 0) return 1;
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int m, n;
    while (scanf("%d %d", &m, &n) == 2) {
        long long fatm = fatorial(m);
        long long fatn = fatorial(n);
        long long soma = fatm + fatn;
        printf("%lld\n", soma);
    }
    return 0;
}
