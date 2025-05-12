#include <stdio.h>

int main() {
    double n = 38, d = 1, s=0;
    for(int i=0;i<37;i++){
        s += (n*(n-1))/d;
        n -= 1;
        d += 1;
    }
    printf("%lf",s);
    return 0;
}