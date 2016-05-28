#include <iostream>

using namespace std;

int main(){
    int *pt, qtde;

    cout << "Quantidade: ";
    cin >> qtde;

    // Alocação dinâmica de memória
    pt = new int[qtde];

    if (pt == NULL) return 1;

    for (int i = 0; i < qtde; ++i){
        cout << "Informe o " << i + 1 << " numero: ";
        cin >> pt[i];
    }

    for (int i = 0; i < qtde; ++i){
        cout << pt[i] << " ";
    }

    // Free
    delete[] pt;

    return 0;
}
