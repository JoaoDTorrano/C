#include <iostream>
using namespace std;


int sequencial(int N[], int Tamanho, int X)
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < Tamanho)
		achou = N[i++] == X;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main()
{
	int N[100]; // vetor que recebera o valor dos vetores
	int X; // Valor quer sera pesquisado
	int i; // variavel que recebe as posicoes dos valores
	int Tamanho; // Recebe o tamanho do vetor N
	int Naux; // Variavel auxiliar do vetor N
	int pos; // Receber a posicao do X

	// Entrada dos valores do Vetor N e determina seu tamanho
	cin >> Naux;
	i = 0;

	while(Naux != -1)
	{
		N[i] = Naux;
		i++;

		cin >> Naux;
	}

	Tamanho = i;

	// Entrada do valor que sera pesquisado
	cin >> X;

	// Pesquisa a posicao do valor X no vetor N
	pos = sequencial(N, Tamanho, X);

	// Mostra se o valor se encontra ou nao no vetor N e qual a sua posicao
	if(pos != -1)
		cout << N[pos] << " encontrado na posicao " << pos << endl;
	else
		cout << X << " nao encontrado" << endl;

	return 0;
}
