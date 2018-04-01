#include <stdio.h>
#include <stdlib.h>
//
int fibonacci(int entrada, int *vetor, int aux){
    int saida;
    if(entrada == 1){
        saida = vetor[aux-1];
        return(printf("%d\n",saida));
    }
    else if(entrada == 2){
        saida = vetor[aux];
        return(printf("%d\n",saida));
    }
    else if(entrada > aux){
        aux++;
        vetor[aux] = vetor[aux-1] + vetor[aux-2];
        return(fibonacci(entrada,vetor,aux));
    }
    saida = vetor[aux-1];
    return(printf("%d\n",saida));
}
//
int main(){
    int entrada;
    int *vetor,aux;
    aux = 1;
    scanf("%d",&entrada);
    vetor = (int*)malloc(entrada*sizeof(int));
    vetor[0] = 1;
    vetor[1] = 1;
    fibonacci(entrada,vetor,aux);
    return(EXIT_SUCCESS);
}