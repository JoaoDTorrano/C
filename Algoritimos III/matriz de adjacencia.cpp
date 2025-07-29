#include <iostream>
using namespace std;

int main(){
    int vertice, aresta, origem, destino;
    cin >> vertice >> aresta;
    
    bool grafo[vertice][vertice];
    for(int i = 0; i < vertice; i++)
       for(int j = 0; j < vertice; j++)
          grafo[i][j] = false;
          
          
    for(int i = 0; i < aresta; i++){
           cin >> origem >> destino;
           grafo[origem][destino] = true;
           grafo[destino][origem] = true;
    }
    
    for(int i = 0; i < vertice; i++){
       for(int j = 0; j < vertice; j++){
           cout << grafo[i][j] << " ";
       }
       cout << endl;
    }
    
    return 0;
}