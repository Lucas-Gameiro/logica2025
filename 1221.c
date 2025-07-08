#include <stdio.h>
#include <math.h>

int eh_primo(int x) {
    if (x < 2) return 0;
    if (x == 2 || x == 3) return 1;
    if (x % 2 == 0) return 0;
    int limite = (int)sqrt(x);
    for (int i = 3; i <= limite; i += 2) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        if (eh_primo(x))
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}
