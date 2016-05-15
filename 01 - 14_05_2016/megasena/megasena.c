/*
    IFPB - João Pessoa
    POP - Projeto Olímpico de Programação
    Data: 14/05/2016

    Nivelamento - Linguagem C
*/

#include <stdio.h>
#include <time.h>

typedef struct {
    int dia, mes, ano;
}Data;

typedef struct {
    Data data;
    int numeros[6];
}Jogo;

void print_jogo(Jogo j);
void print_data(Data d);
void trocar(int *n1, int *n2);
void bolha(int *v);
void gerar_sorteio(int *v);
void print_vetor(int *v);

int main(){
    Jogo jogos[2000];
    int qtde = 0, i, sorteio[6];

    while (scanf("%d/%d/%d", &jogos[qtde].data.dia,
                             &jogos[qtde].data.mes,
                             &jogos[qtde].data.ano) > 0){
        for (i = 0; i < 6; ++i){
            scanf("%d", &jogos[qtde].numeros[i]);
        }
        bolha(jogos[qtde].numeros);

        ++qtde;
    }

    print_jogo(jogos[51]);

    /// gerar seis valores aleatorios e distintos
    gerar_sorteio(sorteio);

    print_vetor(sorteio);
    printf("\n");

    bolha(sorteio);

    print_vetor(sorteio);

    return 0;
}

void print_data(Data d){
    printf("%d/%d/%d", d.dia, d.mes, d.ano);
}

void print_vetor(int *v){
    int i;
    for(i = 0; i < 6; ++i){
        printf(" %d", v[i]);
    }
}

void print_jogo(Jogo j){
    int i;
    print_data(j.data);
    print_vetor(j.numeros);
    printf("\n");
}

void trocar(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bolha(int *v){
    int existe_troca, i;

    do{
        existe_troca = 0;
        for (i = 0; i < 5; ++i){
            if (v[i] > v[i + 1]){
                //trocar(v + i, v + i + 1);
                trocar(&v[i], &v[i + 1]);
                existe_troca = 1;
            }
        }
    }while(existe_troca);
}

void gerar_sorteio(int *v){
    int qtde = 0, valor, i;

    srand(time(NULL));

    do{
        valor = (rand() % 60) + 1;
        for (i  = 0; i < qtde && v[i] != valor; ++i);
        if (i == qtde){
            v[qtde++] = valor;
        }
    }while (qtde < 6);
}

int vetor_cmp(int *v1, int *v2){
    int i;

    for (i = 0; i < 6 && v1[i] == v2[i]; ++i);

    return i == 6;
}
