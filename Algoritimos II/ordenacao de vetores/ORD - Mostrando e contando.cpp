#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho , int &cont)
{
	int i, j; // contadores
	int trab;
	bool troca;
	int limite;
	troca = true;
	limite = tamanho - 1;
	while (troca)
	{
		troca = false;
		for (i = 0; i < limite; i++)
			if (vetor[i] > vetor[i + 1])
			{
				trab = vetor[i];
				cout << "New trab:" << trab << endl;
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = trab;
				j = i;
				troca = true;
				cont++;
			}
		limite = j;
	}
}

int main()
{
	int tamanho;//Recebe o tamanho do vetor
	int vetor[100];//Recebe os valores do vetor
	int i;//Guarda as posicoes dos valores do vetor
	int cont;//Recebe quantas vezes a variavel trab foi trocada

	//Entrada do tamanho do vetor
	cin >> tamanho;

	//Entrada dos valores do vetor
	for(i = 0; i < tamanho; i++)
	{
		cin >> vetor[i];
	}

	//Ordena o vetor na bubblesorte
	//Mostra os valores que a variavel trab recebeu
	cont = 0;
	bubbleSort (vetor, tamanho, cont);

	//Saida de quantas vezes a variavel trab foi trocada
	cout << "Contador:" << cont << endl;

	return 0;
}
