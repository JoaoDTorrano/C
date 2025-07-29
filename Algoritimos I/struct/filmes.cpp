#include <iostream>
using namespace std;

struct info
{
	char nome[100];
	int ano;
};

int main()
{
	info filmes[5]; // armazena os dados do filme
	int n; // numero de filmes catalogados
	int i; // contador

	// Lendo a quantidade de filmes a serem cadastrados
	cin >> n;

	// Lendo dados dos filmes
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(filmes[i].nome, 100);
		cin >> filmes[i].ano;
	}
	// Mostrando dados
	for (i = 0; i < n; i++)
	{
		cout << "Nome do filme: " << filmes[i].nome << endl;
		cout << "Ano: " << filmes[i].ano << endl;
	}

	return 0;
}
