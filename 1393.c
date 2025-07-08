#include <stdio.h>

int main() {
    int N;
    while (scanf("%d", &N) && N != 0) {
        if (N == 1) {
            printf("1\n");
            continue;
        }
        long long dp[41];
        dp[1] = 1;  // sorriso -> 1
        dp[2] = 2;  // sorriso -> 1 -> 2, sorriso -> 2
        for (int i = 3; i <= N; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        printf("%lld\n", dp[N]);
    }
    
    return 0;
}
