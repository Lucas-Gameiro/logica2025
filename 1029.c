#include <stdio.h>
typedef struct{
    int f;
    int n;
}F;
int fibo(F *f1, int f){
    if (f==1){
        f1->n++;
        return 1;
    }
    if (f==0){
        f1->n++;
        return 0;
    }
    else{
        f1->n++;
        return fibo(f1, f-1) + fibo(f1, f-2);
    }
}
int main() {
    int b,a;
    scanf("%i",&b);
    for(int i=0;i<b;i++){
        scanf("%i",&a);
        F f1= {a,-1};
        f1.f = fibo(&f1, f1.f);
        printf("fib(%i) = %i calls = %i\n",a, f1.f, f1.n);
    }
    return 0;
}
