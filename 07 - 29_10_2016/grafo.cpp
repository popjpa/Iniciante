#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

typedef struct
{
    vector< vector<int> > lista;
}Grafo;

void CriarGrafo(Grafo *g, int qtde);
void PrintGrafo(Grafo g);
int dfs(Grafo g, int vertice);


int main(){
    Grafo grafo;
    int qtde, origem, destino;
    int i;

    CriarGrafo(&grafo, 6);

    cin >> qtde;

    for (int i = 0; i < qtde; ++i)
    {
        cin >> origem >> destino;
        grafo.lista[--origem].push_back(--destino);
    }

    PrintGrafo(grafo);

    for (i = 0; i < 6 && dfs(grafo, i); ++i);
    if (i < 6) cout << "nao";
    else cout << "sim";

    cout << endl;

    return 0;
}


void CriarGrafo(Grafo *g, int qtde)
{
    vector<int> v;
    for (int i = 0; i < qtde; ++i)
    {
        g->lista.push_back(v);
    }
}

void PrintGrafo(Grafo g)
{
    vector<int>::iterator it;

    for (int i = 0; i < g.lista.size(); ++i)
    {
        cout << i << ": ";
        for (it = g.lista[i].begin(); it != g.lista[i].end(); ++it)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}


int dfs(Grafo g, int vertice)
{
    stack<int> pilha;
    vector<int> marcacao;
    int v, adjacente;

    pilha.push(vertice);
    marcacao.push_back(vertice);

    while (!pilha.empty())
    {
        v = pilha.top();
        if (!g.lista[v].empty())
        {
            adjacente = g.lista[v].back();
            g.lista[v].pop_back(); // remover arco adjacente
            if (find(marcacao.begin(), marcacao.end(), adjacente) == marcacao.end())
            {
                marcacao.push_back(adjacente);
                pilha.push(adjacente);
            }
        }
        else pilha.pop();
    }

    return marcacao.size() == g.lista.size();
}



