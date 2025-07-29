#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> pilha;
	int x;

	x = 2;
	pilha.push_back(x); // insere x no início da lista
	x = 3;
	pilha.push_front(x);
	x = 5;
	pilha.push_front(x);
	
	cout << *pilha.begin() << endl;
	pilha.pop_front(); // remove o primeiro nó da lista
	cout << *pilha.begin() << endl;

	return 0;
}
