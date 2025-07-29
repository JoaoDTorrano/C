#include <iostream>

using namespace std;

int main()
{

	// Entrada de dados

	int N;
	int X[1000];  // Criacao do vetor com tamanho 1000

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cin >> X[i]; // Entrada do valor
	}

	int menor = X[0]; // Inicializando o menor valor
	int posicao = 0;  // Inicializando a posicao do menor valor

	for(int i = 0; i < N; i++)
	{
		if(X[i] < menor) // Encontrado o menor valor atual
		{
			menor = X[i]; // Atualizando o menor valor
			posicao = i;  // Atualizando a posicao do menor valor
		}
	}

	// Saida de dados

	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;

	return 0;
}
