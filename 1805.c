#include <stdio.h>

int main() {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) == 2) {
        long long soma = (b * (b + 1)) / 2 - ((a - 1) * a) / 2;
        printf("%lld\n", soma);
    }
    return 0;
}
