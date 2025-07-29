#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, list<int>::iterator p, int N)
{
	bool achou = false;
	for(p = lista.begin(); p != lista.end(); p++)
	{
		if(*p == N)
			achou = true;
	}
	
	return achou;
}

int main()
{
	list<int> lista;
	list<int>::iterator p;
	int x;
	int N;
	int achou;
	int i;

	// coloca os numeros na lista
	cin >> x;
	while(x != 0)
	{
		lista.push_back(x);
		cin >> x;
	}

	cin >> N;
	achou = encontrar(lista, p, N);

	if(achou == true)
		cout << "Encontrado" << endl;
	else
		cout << "Nao encontrado" << endl;

	return 0;
}
