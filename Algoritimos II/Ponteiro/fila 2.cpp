#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lista;
	list<int>::iterator p;
	int x;

	x = 2;
	lista.push_back(x); // insere x no início da lista
	x = 3;
	lista.push_back(x);
	x = 5;
	lista.push_back(x); // insere x no início da lista
	
	int soma = 0;
	for(p = lista.begin(); p != lista.end(); p++)
		soma += *p;
	cout << soma << endl;

while(!lista.empty())
	{
		cout << *lista.begin() << endl;
		lista.pop_front(); // remove o primeiro nó da lista
	}

	return 0;
}
