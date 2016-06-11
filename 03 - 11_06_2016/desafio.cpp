#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct{
    string conteudo;
    int frequencia;
}Palavra;

int buscar(vector<Palavra> v, string s);

int main(){
    vector<Palavra> palavras;
    Palavra p;
    string s;
    int pos;

    for (int i = 0; i < 10; ++i){
        cin >> s;
        pos = buscar(palavras, s);
        if (pos == -1){
            //p.conteudo = s;
            //p.frequencia = 1;
            //palavras.push_back(p);
            palavras.push_back((Palavra){s, 1});
        }else{
            palavras[pos].frequencia++;
        }
    }

    for (int i = 0; i < palavras.size(); ++i){
        cout << palavras[i].conteudo << " " << palavras[i].frequencia << endl;
    }

    return 0;
}

int buscar(vector<Palavra> v, string s){
    for (int i = 0; i < v.size(); ++i){
        if (v[i].conteudo == s){
            return i;
        }
    }
    return -1;
}
