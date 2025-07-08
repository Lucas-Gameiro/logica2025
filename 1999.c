#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) && N != -1) {
        int cont = 0;
        for (int n = 0; n * n <= N; n++) {
            for (int q = n; q * q + q * n <= N; q++) {
                int numerator = N - q * n;
                int denominator = q + n;
                if (denominator == 0) {
                    if (N == 0) {
                        cont++;
                    }
                    continue;
                }
                if (numerator >= 0 && numerator % denominator == 0) {
                    int c = numerator / denominator;
                    if (c >= q) {
                        cont++;
                    }
                }
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}
