/*
    IFPB - João Pessoa
    POP - Projeto Olímpico de Programação
    Data: 14/05/2016

    Nivelamento - Linguagem C
*/

#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

int main(){
    char nome[51];
    Data d;

    printf("Informe seu nome: ");
    scanf("%[^\n]s", nome);
    printf("Informe a data: ");
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);


    printf("Nome: %s (%d/%d/%d)\n", nome,
                                    d.dia, d.mes, d.ano);

    return 0;
}
