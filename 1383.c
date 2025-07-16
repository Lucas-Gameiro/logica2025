#include <stdio.h>
#include <ctype.h>
#include <string.h>

int v_linha(char linha[10]){
    int usado[10]={0};
    for(int i=0;i<9;i++){
        int num = linha[i]-'0';
        if(usado[num]==0){
            usado[num] = 1;
        }
        else{
            return -1;
        }}
    return 0;
}
int v_coluna(char coluna[10]){
    int usado[10]={0};
    for(int i=0;i<9;i++){
        int num = coluna[i]-'0';
        if(usado[num]==0){
            usado[num] = 1;
        }
        else{
            return -1;
        }}
    return 0;
}
int main() {
    int n, r=0;
    char sudoku[10][10], colunas[10][10];
    scanf("%i", &n);
    for(int a=1;a<n+1;a++){
        printf("Instancia %i\n",a);
        for(int l=0;l<9;l++){
            for(int i=0;i<9;i++){
                int num; 
                scanf("%d", &num);
                sudoku[l][i] = num + '0';
            }
            if(r==0){
                if(v_linha(sudoku[l])==-1){
                    r = -1;
            }}}
        if(r==0){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                   colunas[i][j] = sudoku[j][i];
                }
                if(r==0){
                    if(v_coluna(colunas[i])==-1){
                        r = -1;
                }}}}
        if(r==0){
            for(int lin=0;lin<9;lin += 3){
                for(int col=0;col<9;col += 3){
                    if(r==0){
                    int usado[10]={0};
                    for(int i=0;i<3;i++){
                        for(int j=0;j<3;j++){
                            int num = sudoku[lin + i][col + j]-'0';
                            if(usado[num] == 0){
                                usado[num]=1;}
                            else{
                                r = -1;
                            }}}}}}}
        if(r==0){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        printf("\n");
        r=0;
            }
    return 0;
}
