#include <stdio.h>

int main(){
    char palavras[10][31];
    int i, j;

    for (i = 0; i < 10; ++i){
        scanf("%s", palavras[i]);
    }

    for (i = 0; i < 10; ++i){
        for (j = 0; palavras[i][j] != '\0'; ++j){
            printf("%c ", palavras[i][j]);
        }
        printf("\n");
    }

    return 0;
}
