#include <stdio.h>
#include <math.h>

int main() {
    int C;
    scanf("%d", &C);
    while (C--) {
        int N;
        scanf("%d", &N);
        int b_x, b_y;
        scanf("%d %d", &b_x, &b_y);
        int c = 1;
        double min_dist = -1;
        for (int i = 1; i <= N; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            double dist = sqrt((x - b_x) * (x - b_x) + (y - b_y) * (y - b_y));
            if (min_dist < 0 || dist < min_dist) {
                min_dist = dist;
                c = i;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
