#include <iostream>
#include <list>

using namespace std;

void print_list(list<int> l);
bool eh_impar(int num);

int main(){
    int numeros[] = {10,9,8,7,6,5,4,3,2,1};
    list<int> lista;

    lista.assign(numeros, numeros + 10);
    print_list(lista);

    cout << "Primeiro: " << lista.front() << endl;
    cout << "Ultimo: " << lista.back() << endl;

    lista.push_back(13);
    lista.push_back(13);
    print_list(lista);

    lista.push_front(13);
    lista.push_front(13);
    print_list(lista);

    lista.insert(++++++++lista.begin(), 4, 15);
    print_list(lista);

    lista.unique();
    print_list(lista);

    lista.sort();
    print_list(lista);

    lista.remove(13);
    print_list(lista);

    lista.remove_if(eh_impar);
    print_list(lista);

    return 0;
}

void print_list(list<int> l){
    for (list<int>::iterator it = l.begin(); it != l.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
}

bool eh_impar(int num){
    return (num % 2 == 1);
}

