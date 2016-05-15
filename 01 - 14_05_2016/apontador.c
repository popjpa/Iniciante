/*
    IFPB - João Pessoa
    POP - Projeto Olímpico de Programação
    Data: 14/05/2016

    Nivelamento - Linguagem C
*/

#include <stdio.h>

int main(){
    int x = 22, *pt;

    pt = &x;

    printf("%p %p\n", pt, &x);
    printf("%d %d\n", *pt, x);

    *pt = 13;

    printf("%d %d\n", *pt, x);

    return 0;
}
