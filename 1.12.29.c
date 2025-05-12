#include <stdio.h>

int main() {
    double n = 480, d = 10, s = 0, a = 1;
    for(int i=0;i<30;i++){
        s += (n/d)*a;
        n -= 5;
        d += 1;
        a *= -1;
    }
    printf("%lf",s);
    return 0;
}