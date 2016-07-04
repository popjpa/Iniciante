#include <iostream>
#include <list>

using namespace std;

bool eh_abaixo_da_media(int num);
void print_list(list<int> l);

float media;

int main(){
    int numero, soma = 0;
    list<int> lista;


    cin >> numero;
    while (numero != 0){
        lista.push_back(numero);
        cin >> numero;
    }

    lista.sort();
    lista.unique();

    for (list<int>::iterator it = lista.begin(); it != lista.end(); ++it){
        soma += *it;
    }

    media = (float)soma / lista.size();

    cout << "Menor: " << lista.front() << endl;
    cout << "Maior: " << lista.back() << endl;

    lista.remove_if(eh_abaixo_da_media);

    cout << "Media: " << media << endl;
    print_list(lista);

    return 0;
}

bool eh_abaixo_da_media(int num){
    return num < media;
}

void print_list(list<int> l){
    for (list<int>::iterator it = l.begin(); it != l.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
}
