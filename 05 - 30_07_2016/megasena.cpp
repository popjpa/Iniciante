#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> lista;
    set<int>::iterator it;
    int num;

    do{
        cin >> num;
        lista.insert(num);
    }while(lista.size() < 6);

    for (it = lista.begin(); it != lista.end(); ++it){
        cout << *it << endl;
    }

    return 0;
}
