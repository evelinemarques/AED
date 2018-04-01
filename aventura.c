#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cont = 0;

int verifica(int pior_caso, int melhor_caso){
    int valor;
    float aux;
    valor = (melhor_caso + pior_caso)/2;
    if(valor <= pior_caso-1){
        cont++;
        return(verifica(valor,melhor_caso));
    }
    else{
        if(pior_caso%2 == 0){
            cont++;
        }
        return(printf("%d\n",cont));
    }
}

int main(){
    int maximo, minimo, baloes;
    minimo = 0;
    scanf("%d %d",&maximo,&baloes);
    verifica(maximo,minimo);
    return(EXIT_SUCCESS);
}