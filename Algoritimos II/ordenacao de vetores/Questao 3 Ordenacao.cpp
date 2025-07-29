#include <iostream>
#include <cmath>
using namespace std;

void quickSort(int vetor[], int i, int j)
{
	int trab, esq, dir, pivo;
	esq = i;
	dir = j;
	pivo = vetor[(int)round((esq + dir) / 2.0)];
	do
	{
		while (vetor[esq] < pivo)
			esq++;
		while (vetor[dir] > pivo)
			dir--;
		if (esq <= dir)
		{
			trab = vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = trab;
			esq++;
			dir--;
		}
	}
	while (esq <= dir);
	if (dir - i >= 0)
		quickSort(vetor, i, dir);
	if (j - esq >= 0)
		quickSort(vetor, esq, j);
}

int main()
{
	int vetor[100]; // vetor que recebe os numeros
	int i; // recebe a posicao de cada numero
	int tamanho; // rece o tamanho do vetor
	int j; // A ultima posicao do vetor
	int vetorAUX; // auxilia o vetor para descobrir seu tamanho

	// Entrada dos numeros
	i = 0;
	cin >> vetorAUX;

	while(vetorAUX != -1)
	{
		vetor[i] = vetorAUX;
		i++;
		cin >> vetorAUX;
	}

	tamanho = i;

	// Ordena o vetor em ordem crescente
	i = 0;
	j = tamanho;

	quickSort(vetor, i, j);

	// Saida do vetor em ordem decrescente
	for(i = 0; i < tamanho; i++)
		cout << vetor[i] << " ";

	return 0;
}
