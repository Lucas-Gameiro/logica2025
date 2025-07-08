#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int caso = 0; caso < n; caso++) {
        char string_codificada[51];
        int deslocamento;
        scanf("%s", string_codificada);
        scanf("%d", &deslocamento);
        for (int i = 0; i < strlen(string_codificada); i++) {
            char letra_codificada = string_codificada[i];
            int posicao_atual = letra_codificada - 'A';
            int posicao_original = posicao_atual - deslocamento;
            if (posicao_original < 0) {
                posicao_original += 26;
            }
            char letra_original = 'A' + posicao_original;
            printf("%c", letra_original);
        }
        printf("\n");
    }
    return 0;
}
