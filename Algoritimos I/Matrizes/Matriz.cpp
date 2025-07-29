//Matrizes
#include <iostream>
using namespace std;

int main()
{
	int mat[2][3];
	int i; // indice
	int j; // coluna
	int nLinhas = 2; // referercial [2]
	int nColunas = 3; // referencial [3]

// Entrada dos valores da mtriz
	for(i = 0; i < nLinhas; i++)
	{
		for(j = 0; j < nColunas; j++)
		{
			cin >> mat[i][j];
		}
	}

// Saida da matriz
	for(j = 0; j < nColunas; j++)
	{
		for(i = 0; i < nLinhas; i++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
