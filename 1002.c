#include <stdio.h>
#include <math.h>

int main() {
    float r;
    float p = 3.14159;
    scanf("%f",&r);
    r = p*pow(2,r);
    printf("%.4f\n",r);

    return 0;
}
