#include <iostream>
using namespace std;

int main()
{
	int notas[5]; // notas de C02 da turma L3
	float media; // media da turma
	int soma; // soma das notas
	int i; // contador

	// Lendo as notas
	for(i = 0; i < 5; i++)
		cin >> notas[i];

	// Calculando e mostrando a media
	soma = 0;
	for(i = 0; i < 5; i++)
		soma = soma + notas[i];
//.................................................................................................................................................................//
	media = (float)soma / 5;// divisao e fora do for
	cout << media << endl;

	return 0;
}
