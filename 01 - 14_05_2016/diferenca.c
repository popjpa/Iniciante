/*
    IFPB - João Pessoa
    POP - Projeto Olímpico de Programação
    Data: 14/05/2016

    Nivelamento - Linguagem C
*/

#include <stdio.h>

int main(){
    int x = 1, y = 2;

    printf("%d %d\n", x, y);
    x = ++y;

    printf("%d %d\n", x, y);

    x = y++;
    printf("%d %d\n", x, y);

    return 0;
}
