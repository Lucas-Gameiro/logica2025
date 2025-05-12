#include <stdio.h>
#include <math.h>

int main() {

    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3){
        double p;
        p = (a+b+c)/2;
        double at = sqrt(p*(p-a)*(p-b)*(p-c));
        double rg = (a*b*c)/(4*at);
        double ag = (3.1415926535897*pow(rg,2)) - at;
        double rr = at/p;
        double ar = (3.1415926535897*pow(rr,2));
        double av = at - ar;
        printf("%.4f %.4f %.4f\n",ag,av,ar);
    }
    return 0;
}