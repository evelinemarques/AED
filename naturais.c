    #include <stdio.h>
    #include <stdlib.h>
    //Vai lavar a louça//
    int aux = 0;
    int naturais(int numero){
        if(aux < numero){
            aux = aux + 1;
            printf("%d ",aux);
            return(naturais(numero));
        }
        else{
            return(EXIT_SUCCESS);
        }
    }
    //
    int main(){
        int entrada;
        scanf("%d",&entrada);
        naturais(entrada);
        return(EXIT_SUCCESS);
    }
