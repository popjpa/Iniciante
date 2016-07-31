#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    list<string> lista;
    list<string>::iterator it;

    lista.push_back("um");
    lista.push_back("um");
    lista.push_back("um");
    lista.push_back("dois");
    lista.push_back("tres");
    lista.push_back("um");
    lista.push_back("um");
    lista.push_back("quatro");

    lista.sort();
    lista.unique();


    for (it = lista.begin(); it != lista.end(); ++it)    {
        cout << *it << endl;
    }

    return 0;
}
