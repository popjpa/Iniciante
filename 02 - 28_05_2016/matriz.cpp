#include <iostream>

using namespace std;

int main(){
    int **pt, linhas, colunas;

    cin >> linhas;
    cin >> colunas;

    // Alocar linhas
    pt = new int*[linhas];

    // Alocar colunas de cada linha
    for (int i = 0; i < linhas; ++i){
        pt[i] = new int[colunas];
    }

    // Lendo os elementos da matriz
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << "Elem[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> pt[i][j];
        }
    }

    // Exibindo os elementos da matriz
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << pt[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < linhas; ++i){
        delete[] pt[i];
    }

    delete[] pt;

    return 0;
}
