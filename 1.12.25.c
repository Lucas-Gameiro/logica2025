#include <stdio.h>

int main() {
    double n = 2, d = 50, s=0;
    for(int i=0;i<50;i++){
        s += n/d;
        n *= 2;
        d -= 1;
    }
    printf("%lf",s);
    return 0;
}