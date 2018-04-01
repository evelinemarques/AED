#include <stdio.h>
#include <stdlib.h>

int verifica(int *matriz, int numero, int aux){

}

int main(){
    char **matriz;
    int m,n; //ex: 5 e 3 ou 5 e 5//
    int i,j;
    scanf("%d %d",&m,&n);
    //alocando uma matriz de ponteiro//
    matriz = (char*)malloc(m*sizeof(char));
    for(i = 0; i < m; i++){
        matriz[i] = (char*)malloc(n*sizeof(char));
    }
    //percorrendo a matriz com os valores . ou #
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%c",&matriz[i][j]);
        }
    }
}