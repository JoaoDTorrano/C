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

	while(x != -1)//Enquanto isso for verdadeiro ira repetir o processo.
	//Deve garantir que é falso se não entrara em um loop infinito!
	{
		i++;
		soma = soma + x;
		cin >> x;
	}
	n = i;//elementos inceridos
	media = (float)soma / n;//media

	cout << "soma = " << soma << endl;
	cout << "elementos inceridos = " << n << endl;
	cout << "media = " << media << endl;

	return 0;
}
