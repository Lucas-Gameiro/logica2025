#include <stdio.h>
 
int n;
int matriz[9][9];
int verificar() {
    int i, j, k;
    int usado[10];
    for (i = 0; i < 9; i++) {
        for (k = 1; k <= 9; k++) usado[k] = 0;
        for (j = 0; j < 9; j++) {
            if (usado[matriz[i][j]]) return 0;
            usado[matriz[i][j]] = 1;
        }
    }
    for (j = 0; j < 9; j++) {
        for (k = 1; k <= 9; k++) usado[k] = 0;
        for (i = 0; i < 9; i++) {
            if (usado[matriz[i][j]]) return 0;
            usado[matriz[i][j]] = 1;
        }
    }
    int ri, rj;
    for (ri = 0; ri < 9; ri += 3) {
        for (rj = 0; rj < 9; rj += 3) {
            for (k = 1; k <= 9; k++) usado[k] = 0;
            for (i = ri; i < ri + 3; i++) {
                for (j = rj; j < rj + 3; j++) {
                    if (usado[matriz[i][j]]) return 0;
                    usado[matriz[i][j]] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    scanf("%d", &n);
    int inst;
    for (inst = 1; inst <= n; inst++) {
        int i, j;
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("Instancia %d\n", inst);
        if (verificar()) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
