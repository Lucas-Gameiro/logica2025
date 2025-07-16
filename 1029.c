#include <stdio.h>
typedef struct{
    int calls;
}F;
long long int fibonacci(long long int num,F *p1){
    if(num==0){
        return 0;
    }
    else{
        if(num==1){
            return 1;
        }
    }
    if(num>1){
        p1 -> calls += 2;
        return fibonacci(num-1,p1)+fibonacci(num-2,p1);
    }
}
int main(){
    long long int n, x;
    scanf("%lli", &n);
    for(int i=0;i<n;i++){
        scanf("%lli", &x);
        F p1 = {0};
        long long int fibo = fibonacci(x, &p1);
        printf("fib(%lli) = %lli calls = %i\n",x,fibo,p1.calls);
    }
    return 0;
}
