#include <iostream>
using namespace std;

//Insertion Sort
void insercaoDireta(int vetor[], int tamanho)
{
	int i, j; // contadores
	int chave;
	for (j = 1; j < tamanho; j++)
	{
		chave = vetor[j];
		i = j - 1;
		while ((i >= 0) && (vetor[i] < chave))
		{
			vetor[i + 1] = vetor[i];
			i = i - 1;
		}
		vetor[i + 1] = chave;
	}
}


int main()
{
	int vetor[100];
	int i;
	int tamanho;
	int vetorAUX;

	cin >> vetorAUX;
	i = 0;
	while(vetorAUX != 0)
	{
		vetor[i] = vetorAUX;
		i++;
		cin >> vetorAUX;
	}

	tamanho = i;

	insercaoDireta(vetor, tamanho);

	for(i = 0; i < tamanho; i++)
		cout << vetor[i] << " ";


	return 0;
}
