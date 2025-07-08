#include <stdio.h>
#include <string.h>

int vogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int palindromo(char vogais[], int tamanho) {
    for (int i = 0; i < tamanho / 2; i++) {
        if (vogais[i] != vogais[tamanho - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char seq[51];
    char vogais[51];
    int tamanho_vogais = 0;
    scanf("%s", seq);
    for (int i = 0; i < strlen(seq); i++) {
        if (vogal(seq[i])) {
            vogais[tamanho_vogais] = seq[i];
            tamanho_vogais++;
        }
    }
    if (palindromo(vogais, tamanho_vogais)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    return 0;
}
