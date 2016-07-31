#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){
    vector<string> vetor;
    list<string> lista;

    vetor.push_back("primeiro");
    vetor.push_back("segundo");

    lista.insert(lista.begin(), vetor.front());

    cout << vetor[0] << endl;
    cout << lista.front() << endl;

    return 0;
}
