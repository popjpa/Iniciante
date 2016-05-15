/*
    IFPB - João Pessoa
    POP - Projeto Olímpico de Programação
    Data: 14/05/2016

    Nivelamento - Linguagem C
*/

#include <stdio.h>

int main(){
    int *pt, i;
    int vetor[] = {10,20,30,40};

    pt = vetor;

    for (i = 0; i < 4; ++i){
        printf("%d %d\n", vetor[i], pt[i]);
    }

    for (i = 0; i < 4; ++i){
        printf("%d %d %d\n", vetor[i], *(vetor + i), *(pt + i));
    }

    return 0;
}
