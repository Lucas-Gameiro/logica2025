#include <stdio.h>

long long int fibonacci(int num){
    if(num == 0){
        return 0;
    }
    else{
        if(num==1){
            return 1;
        }
    }
    if(num>1){
        long long int x=0,y=1,z;
        for(int i=1;i<num;i++){
            z = x + y;
            x = y;
            y = z;
        }
        return z;
    }
        
}

int main(){
    int t,n;
    scanf("%i",&t);
    for(int i =0;i<t;i++){
        scanf("%i",&n);
        long long int fibo = fibonacci(n);
        printf("Fib(%i) = %lli\n",n,fibo);
    }
    return 0;
}
