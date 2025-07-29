#include <iostream>
#include <iomanip>
using namespace std;

struct tropa
{
	int id;
	double IM;
	double FA;
	double GA;
};

int main()
{
	tropa clone[100]; // traz a informacoees dos clones
	double GA; // media aritmética de IM e FA
	int i = 0; // controlador
	int n; // segundo controlador
	int pos; // indica o id do tropper escolhido
	int idAUX; // auxilia para sair da estrutura de repeticao
	double ma = -50000; // menor  valor possivel para encontar o a media mais alta

	// Entrada de dados
	
	cin >> idAUX;

	while(idAUX != 0)
	{
		clone[i].id = idAUX;
		cin >> clone[i].IM;
		cin >> clone[i].FA;

		clone[i].GA = (clone[i].IM + clone[i].FA) / 2.0;

		i++;

		cin >> idAUX;
	}

	n = i;

	// Saida de dados

	for(i = 0; i < n; i++)
	{
		if(clone[i].GA > ma)
		{
			ma = clone[i].GA;
			pos = i;
		}
	}

	cout << fixed << setprecision(2);
	cout << "Stormtrooper escolhido: " << clone[pos].id << endl;
	cout << "GA = " << ma << endl;

	return 0;
}
