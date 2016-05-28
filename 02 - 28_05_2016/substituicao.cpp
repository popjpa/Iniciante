#include <iostream>
#include <string>

using namespace std;

int main(){
    string linha;
    int posicao, qtde = 0;

    while (getline(cin, linha)){
        //cout << linha << endl;
        posicao = linha.find("algoritmo");
        while (posicao != string::npos){
            ++qtde;
            linha.replace(posicao, 9, "C++");
            posicao = linha.find("algoritmo");
        }
        cout << linha << endl;
    }

    cout << "Quantidade = " << qtde << endl;
}
