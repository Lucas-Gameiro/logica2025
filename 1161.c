#include <stdio.h>
#include <math.h>
long long int fatorial(long long int num){
    if(num==0){
        return 1;
    }
    else{
        if(num==1){
            return 1;
        }
    }
    return num*fatorial(num-1);
}

int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b) != EOF){
        long long int r = fatorial(a) + fatorial(b);
        printf("%lli\n",r);
    }
    return 0;
}
