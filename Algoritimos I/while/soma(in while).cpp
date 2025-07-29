#include <iostream>
using namespace std;

int main()
{
	int i; //contador
	int x; //le os dados
	int soma; //soma os numeros lidos
	int n; //quantidade de numeros a serem lidos

	cin >> n;

	soma = 0;
	i = 0;

	while(i < n)//Enquanto isso for verdadeiro ira repetir o processo.
		//Deve garantir que é falso se não entrara em um loop infinito!
	{
		i++;
		cin >> x;
		soma = soma + x;
	}

	cout << "soma = " << soma << endl;

	return 0;
}
