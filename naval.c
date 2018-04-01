#include <stdio.h>
#include <stdlib.h>

void main(){
    char **matriz;
    int m,n;
    int jogadas;
    int i;
    //capturando o numero de linhas e colunas para matriz//
    scanf("%d",&m);
    scanf("%d",&n);
    //alocando memoria para matriz de char//
    matriz = malloc(m * sizeof(char));
    for(i=0; i<m; i++){
        matriz[i] = malloc(n * sizeof(char));
    }
}