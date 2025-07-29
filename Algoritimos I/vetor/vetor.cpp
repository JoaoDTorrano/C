#include <iostream>
using namespace std;

int main()
{
	int nSeguidores[3];// tem que ser um numero
	int i; // contador
	int maior;
	int popular;

	//Lendo a quantidade de seguidores de cada um

	for(i = 0; i < 3; i++)
	{
		cin >> nSeguidores[i];
	}

	// Indentificando a pessoa mais popular

	maior = 0;

	for(i = 0; i < 3; i++)
	{
		if(nSeguidores[i] > maior)
		{
			maior = nSeguidores[i];
			popular = i;
		}
	}

	cout << "maior = " << maior << endl;
	cout << "popular = " << popular << endl;

	return 0;
}
