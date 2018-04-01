#include <stdio.h>
#include <stdlib.h>

int cont = 0;

int verifica(char **matriz, int numero, int aux){
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    if(matriz[p-1][q-1] == '#'){
        cont++;
    }
    //
    if(aux < numero){
        aux++;
        return(verifica(matriz,numero,aux));
    }
    else{
        return(printf("%d\n",cont));
    }
}

int main(){
    char **matriz;
    int m,n; //tamanho da matriz//
    int jogadas; //numero de jogadas//
    int aux = 1; //contador aux de jogadas feitas//
    int i,j;
    //capturando o numero de linhas e colunas para matriz//
    scanf("%d",&m);
    scanf("%d",&n);
    //alocando memoria para matriz de char//
    matriz = malloc(m * sizeof(char));
    for(i=0; i<m; i++){
        matriz[i] = malloc(n * sizeof(char));
    }
    //preencher a matriz de chars '.' ou '#'//
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf(" %c",&matriz[i][j]);
        }
    }
    /*mostrando a matriz
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("m[%d][%d] = %c\n",i,j,matriz[i][j]);
        }
    }*/
    //pegando o numero de jogadas//
    scanf("%d",&jogadas);
    //verificando//
    verifica(matriz,jogadas,aux);
    //
    free(matriz);
    matriz = NULL;
    return(EXIT_SUCCESS);
}