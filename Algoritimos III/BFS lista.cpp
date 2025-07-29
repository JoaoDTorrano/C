#include <iostream>
#include <list>
using namespace std;

typedef struct no{
	int v;
	int peso;
}no;

void cria_aresta(list<no>adj[], int u, int v, int p){
	no aux;
	aux.v = v;
	aux.peso = p;
	adj[u].push_back(aux);
	aux.v = u;
	adj[v].push_back(aux);
}
/*
void bfs(list<no>adj[], int nVertices, int s){
	int u, v;
	char state[100];
	int pai[100];
	list<int>Q;
	
	for(u = 0; u < nVertices; u++){
		if(u != s){
			state[u] = 'u'; // undiscovered
			pai[u] = -1; // sem pais
		}
	}
	
	state[s] = 'd'; // discovered
	pai[s] = -1;
	Q.push_back(s);
	
	while(!Q.empty()){
		u = *Q.begin();
		Q.pop_front();
		cout << u << endl;
		
		for(list<no>::iterator p = adj[u].begin(); p != adj[u].end(); p++){
			v = p->v;
			cout << u << " " << v << endl;
			
			if(state[v] == 'u'){
				state[v] = 'd';
				pai[v] = u;
				Q.push_back(v);
			}
		}
		
		state[u] = 'p';
	}
}
*/

// faz um percurso bfs em um grafo representado por uma matriz de adjacências
// retorna true caso o grafo seja conexo, e false caso contrário
bool bfs(list<no>adj[], int vertices, int orig){
	bool visitado[vertices]; // vertices que foram visitados
	list<int> fila; // fila de visitação
	// inicializado o vetor visitado como false em todas as posições
	for(int i = 0; i < vertices; i++)
		visitado[i] = false;

	// visitamos a origem
	visitado[orig] = true;
	fila.push_back(orig);

	// varrendo o grafo
	while(!fila.empty()) { // a varredura termina quando a fila de visitação estiver vazia
		int atual = fila.front(); // vertice atual
		cout << atual << endl;
		// colocando os vertices adjacentes do atual
		// que ainda não foram visitados na fila de visitação
		for(list<no>::iterator p = adj[atual].begin(); p != adj[atual].end(); p++) {
			int adj = p->v;
			
			if(!visitado[adj]){
				fila.push_back(adj);
				visitado[adj] = true;
			}
		}
		// tirar nós visitados da fila de visitação
		fila.pop_front();
	}
	
	for(int i = 0; i < vertices; i++){
		if(!visitado[i])
			return false;
	}
	
	return true;
}

int main(){
	list<no>adj[100];
	int nVertices, s;
	int u, v, p;
	
	cin >> nVertices >> s;
	
	cin >> u >> v >> p;
	while(u != -1 && v != -1 && p != -1){
		cria_aresta(adj, u, v, p);
		cin >> u >> v >> p;
	}
	
	bfs(adj, nVertices, s);
	
	return 0;
}