#include <stdio.h>

int main() {
    double n = 1, s=0,a = 1;
    for(int i=0;i<10;i++){
        s += (n/(n*n))*a;
        n += 1;
        a *= -1;
    }
    printf("%lf",s);
    return 0;
}