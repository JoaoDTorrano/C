#include <iostream>
using namespace std;

int main()
{
	int i; // contador
	int n; // # repiticoes
	int x; // numeros a serem somados
	int soma; // soma dos numeros

	cin >> n; // lendo # repeticoes

	// Lendo e somando os numeros
	soma = 0;
	for(i = 0; i < n; i++)
	{
		x = i;
		soma = soma + (1/x);
	}

	// Mostrando a soma
	cout << "soma = " << soma << endl;

	return 0;
}
