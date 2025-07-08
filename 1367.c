#include <stdio.h>
#include <string.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        char problema;
        int tempo;
        char resultado[20];
        int resolvido[26] = {0};       
        int tempo_correto[26] = {0};    
        int tentativas_erradas[26] = {0}; 
        for (int i = 0; i < n; i++) {
            scanf(" %c %d %s", &problema, &tempo, resultado);
            int indice = problema - 'A'; 
            if (strcmp(resultado, "correct") == 0) {
                if (!resolvido[indice]) {
                    resolvido[indice] = 1;
                    tempo_correto[indice] = tempo;
                }
            } else { // resultado é "incorrect"
                if (!resolvido[indice]) {
                    tentativas_erradas[indice]++;
                }
            }
        }
        int S = 0; 
        int P = 0;
        for (int i = 0; i < 26; i++) {
            if (resolvido[i]) {
                S++;
                P += tempo_correto[i] + (tentativas_erradas[i] * 20);
            }
        }
        printf("%d %d\n", S, P);
    }
    
    return 0;
}
