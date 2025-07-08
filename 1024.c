#include <stdio.h>
#include <string.h>

int e_letra(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

void inverter_string(char str[]) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    for (int caso = 0; caso < n; caso++) {
        char linha[1001];
        fgets(linha, sizeof(linha), stdin);
        int tamanho = strlen(linha);
        if (tamanho > 0 && linha[tamanho - 1] == '\n') {
            linha[tamanho - 1] = '\0';
            tamanho--;
        }
        for (int i = 0; i < tamanho; i++) {
            if (e_letra(linha[i])) {
                linha[i] = linha[i] + 3;
            }
        }
        inverter_string(linha);
        int metade = tamanho / 2;
        for (int i = metade; i < tamanho; i++) {
            linha[i] = linha[i] - 1;
        }
        printf("%s\n", linha);
    }
    return 0;
}
