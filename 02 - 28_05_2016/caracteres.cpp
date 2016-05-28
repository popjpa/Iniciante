#include <iostream>
#include <string>

using namespace std;

int main(){
    string frase("eu gosto estudar");
    string outra(frase);
    string repeticao(10, 'V');
    string nome;
    int indice;

    cout << frase << endl;
    cout << outra << endl;
    cout << repeticao << endl;

    cout << "Informe seu nome: ";
    cin >> nome;
    getline(cin, nome);
    cout << nome;

    // quantidade de caracteres
    cout << frase.length() << endl;

    // Comparando as strings
    if (frase == repeticao){
        cout << "iguais";
    }else if (frase < repeticao){
        cout << "menor" << endl;
    }else {
        cout << "maior" << endl;
    }

    cout << frase.compare(outra) << endl;

    // Procurando na string
    indice = frase.find("gosto");

    if (indice == string::npos)
        cout << "nao existe";
    else
        cout << indice << endl;

    for (int i = 0; i < frase.length(); ++i){
        cout << frase[i] << " ";
    }

    cout << endl;

    // Apontadores inicio (begin) e fim (end)
    cout << *frase.begin();
    cout << *(frase.end() - 1);

    // Iterando a string
    for (string::iterator it = frase.begin(); it != frase.end(); ++it){
        cout << *it << " ";
    }

    cout << endl;

    // Procurando na string
    indice = frase.find("gosto");

    // Apagando caracteres
    frase.erase(indice, string("gosto").length());
    cout << frase << "|" << endl;

    // Inserindo caracteres
    frase.insert(indice, "adoro");
    cout << frase << "|" << endl;

    // Substituindo caracteres
    indice = frase.find("adoro");
    frase.replace(indice, string("adoro").length(), "amo");

    indice = frase.find("amo");
    frase.replace(indice, string("amo").length(), 10, '*');
    cout << frase << "|" << endl;

    // Adicionando caracteres no final da string
    frase.append("!!");
    cout << frase << "|" << endl;

    // Apagando toda a string
    frase.clear();
    cout << frase << "|" << endl;
}
