#include <stdio.h>

int main() {
    int c1, n1;
    float p1, t=0;
    scanf("%i %i %f",&c1, &n1, &p1);
    t += n1*p1;
    scanf("%i %i %f",&c1, &n1, &p1);
    t += n1*p1;
    printf("VALOR A PAGAR: R$ %.2f",t);
    return 0;
}
