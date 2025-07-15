#include <stdio.h>
#include <string.h>

int vogal(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char risada[51];
    char vogais[51];
    int len_vogais = 0;
    scanf("%s",risada);
    for(int i=0; i<strlen(risada); i++){
        if(vogal(risada[i])){
            vogais[len_vogais]=risada[i];
            len_vogais += 1;
        }
    }
    int palindromo=0;
    for(int i=0; i<len_vogais/2;i++){
        if(vogais[i]!=vogais[len_vogais-1-i]){
            palindromo = -1;
            break;
        }
    }
    if(palindromo==0){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}
