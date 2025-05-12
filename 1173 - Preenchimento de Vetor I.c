#include <stdio.h>
 
int main() {
 
    int v;
    int N[10];
    scanf("%d", &v);
    for(int i = 0; i<10;i++){
        N[i] = v;
        printf("N[%d] = %d\n",i,v);
        v *= 2;
    }
    
 
    return 0;
}