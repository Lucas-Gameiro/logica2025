#include <stdio.h>
 
long long hashmat, oponente;

int main() {
    while (scanf("%lld %lld", &hashmat, &oponente) == 2) {
        long long dif = hashmat - oponente;
        if (dif < 0) dif = -dif;
        printf("%lld\n", dif);
    }
    return 0;
}
