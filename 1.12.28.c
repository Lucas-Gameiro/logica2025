#include <stdio.h>

int main() {
    double n = 1000, d = 1, s = 0, a = 1;
    for(int i=0;i<50;i++){
        s += (n/d)*a;
        n -= 3;
        d += 1;
        a *= -1;
    }
    printf("%lf",s);
    return 0;
}