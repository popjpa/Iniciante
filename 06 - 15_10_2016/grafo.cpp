// http://10.0.59.152/pop/

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void print_rede(int m[][8], map<int,string> r);

int main(){
    int matriz[8][8] = {
        {0,0,1,0,0,0,1,0},
        {0,0,1,0,0,0,0,1},
        {0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,1,1,0,0,0,0,0},
        {1,1,1,1,0,1,0,1},
        {0,0,0,1,0,0,1,0}
    };
    map<int, string> rede;
    vector< vector<int> > lista;
    vector<int> v;
    string caminho = "632067510";

    rede[0] = "Ronily";
    rede[1] = "Pablo";
    rede[2] = "Michael";
    rede[3] = "Camilla";
    rede[4] = "Pedro";
    rede[5] = "Anderson";
    rede[6] = "Vitoria";
    rede[7] = "Bruno";

    print_rede(matriz, rede);

    /// montar a lista de adjacencias
    for (int i = 0; i < 8; ++i){
        lista.push_back(v);
        for (int j = 0; j < 8; ++j){
            if (matriz[i][j]){
                lista[i].push_back(j);
            }
        }
    }

    return 0;
}

void print_rede(int m[][8], map<int,string> r){
    for(int i = 0; i < 8; ++i){
        cout << r[i] << ": ";
        for (int j = 0; j < 8; ++j){
            if (m[i][j]){
                cout << r[j] << " ";
            }
        }
        cout << endl;
    }
}
