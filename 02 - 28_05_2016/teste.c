#include <stdio.h>

int main(){
    system("substituicao < in.c > saida");
    system("fc out.c saida");

    return 0;
}
