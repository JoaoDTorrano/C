#include <iostream>
using namespace std;

int main()
{
	int mat_1[100][100];
	int mat_2[100][100];
	int mat_3[100][100];
	int i; // indice
	int j; // coluna
	int N; // indica o numero de linhass
	int M; // indica o numero de colunas

	// Entrada dos valores das matrizes
	cin >> N >> M;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			cin >> mat_1[i][j];
		}
	}
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			cin >> mat_2[i][j];
		}
	}


	// Soma das duas matrizes
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			mat_3[i][j] = mat_1[i][j] + mat_2[i][j];
		}
	}

	// Saida da soma das suas matrizes


	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			cout << mat_3[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
