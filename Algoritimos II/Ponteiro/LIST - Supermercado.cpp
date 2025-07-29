#include <iostream>
#include <list>
using namespace std;

int main()
{
	int N;
	list<int> estoque;
	list<int> venda;
	int cod;
	int prod;
	int i;

	cin >> N;

	for (i = 0; i < N; i++)
	{
		cin >> cod;
		if(cod == 1)
		{
			cin >> prod;
			estoque.push_back(prod);
		}
		else if(cod == 2)
		{
			venda.push_front(*estoque.begin());
			estoque.pop_front();
		}
	}

	cout << "Estoque: ";
	while(!estoque.empty())
	{
		cout << *estoque.begin() << " ";
		estoque.pop_front(); // remove o primeiro nó da lista
	}
	cout << endl;

	cout << "Venda: ";
	while(!venda.empty())
	{
		cout << *venda.begin() << " ";
		venda.pop_front(); // remove o primeiro nó da lista
	}
	cout << endl;

	return 0;
}
