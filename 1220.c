#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        int *gastos = malloc(n * sizeof(int));
        long long soma = 0;
        for (int i = 0; i < n; i++) {
            char s[32];
            scanf("%s", s);
            int reais = 0, centavos = 0;
            char *p = strchr(s, '.');
            if (p) {
                *p = '\0';
                reais = atoi(s);
                if (strlen(p + 1) == 1)
                    centavos = (p[1] - '0') * 10;
                else
                    centavos = (p[1] - '0') * 10 + (p[2] - '0');
            } else {
                reais = atoi(s);
            }
            gastos[i] = reais * 100 + centavos;
            soma += gastos[i];
        }
        int media = soma / n;
        int resto = soma % n;
        int alvo1 = media, alvo2 = media + 1;
        long long deve = 0, sobra = 0;
        for (int i = 0; i < n; i++) {
            if (gastos[i] < alvo1)
                deve += alvo1 - gastos[i];
            else if (gastos[i] > alvo2)
                sobra += gastos[i] - alvo2;
        }
        long long troca = deve > sobra ? deve : sobra;
        printf("$%lld.%02lld\n", troca / 100, troca % 100);
        free(gastos);
    }
    return 0;
}
