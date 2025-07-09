#include <stdio.h>
#include <string.h>

int mod(char *ano, int divisor) {
    int resto = 0;
    int len = strlen(ano);
    for (int i = 0; i < len; i++) {
        resto = (resto * 10 + (ano[i] - '0')) % divisor;
    }
    return resto;
}

int main() {
    char ano[1001];
    int primeiro = 1;
    while (scanf("%s", ano) == 1) {
        if (!primeiro) printf("\n");
        primeiro = 0;
        int r4 = mod(ano, 4);
        int r100 = mod(ano, 100);
        int r400 = mod(ano, 400);
        int r15 = mod(ano, 15);
        int r55 = mod(ano, 55);
        int bissexto = (r4 == 0 && r100 != 0) || (r400 == 0);
        int huluculu = (r15 == 0);
        int bulukulu = (r55 == 0 && bissexto);
        int tem_propriedade = 0;
        if (bissexto) {
            printf("This is leap year.\n");
            tem_propriedade = 1;
        }
        if (huluculu) {
            printf("This is huluculu festival year.\n");
            tem_propriedade = 1;
        }
        if (bulukulu) {
            printf("This is bulukulu festival year.\n");
            tem_propriedade = 1;
        }
        if (!tem_propriedade) {
            printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
