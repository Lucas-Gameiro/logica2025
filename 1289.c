#include <stdio.h>
#include <math.h>

int main() {
    int S;
    scanf("%d", &S);
    while (S--) {
        int N, I;
        double P;
        scanf("%d %lf %d", &N, &P, &I);
        if (P == 0.0) {
            printf("0.0000\n");
            continue;
        }
        if (P == 1.0) {
            printf(I == 1 ? "1.0000\n" : "0.0000\n");
            continue;
        }
        double Q = 1.0 - P;
        double prob = pow(Q, I - 1) * P / (1.0 - pow(Q, N));
        printf("%.4f\n", prob);
    }
    return 0;
}
