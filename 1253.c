#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 
    for (int caso = 0; caso < n; caso++) {
        char linha[201];
        int frequencia[26] = {0};
        fgets(linha, sizeof(linha), stdin); 
        // Contar frequência de cada letra
        for (int i = 0; i < strlen(linha); i++) {
            if (isalpha(linha[i])) {
                char letra = tolower(linha[i]); 
                frequencia[letra - 'a']++;
            }
        }
        int freq_max = 0;
        for (int i = 0; i < 26; i++) {
            if (frequencia[i] > freq_max) {
                freq_max = frequencia[i];
            }
        }
        for (int i = 0; i < 26; i++) {
            if (frequencia[i] == freq_max) {
                printf("%c", 'a' + i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
