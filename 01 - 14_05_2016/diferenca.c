/*
    IFPB - Jo�o Pessoa
    POP - Projeto Ol�mpico de Programa��o
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
