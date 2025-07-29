#include <iostream>
using namespace std;

int main()
{
	int i; //contador
	int x; //le os dados
	int soma; //soma os numeros lidos
	int n; //quantidade de numeros a serem lidos
	float media;


	soma = 0;
	i = 0;
	cin >> x;// usa para n fazer a soma da condicional de saida

	do
	{
		i++;
		soma = soma + x;
		cin >> x;
	}
	while(x != -1); //Enquanto isso for verdadeiro ira repetir o processo.

	n = i;//elementos inceridos
	media = (float)soma / n;//media

	cout << "soma = " << soma << endl;
	cout << "elementos inceridos = " << n << endl;
	cout << "media = " << media << endl;

	return 0;
}
