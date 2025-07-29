#include <iostream>
using namespace std;

int main()
{
	int i; // contador
	int n; // quantidade de provas
	int x; // nota das provas
	int soma; // soma das notas
	float media;

	cin >> n; // lendo # repeticoes

	// Lendo e somando os numeros
	soma = 0;
	for(i = 0; i < n; i++)
	{
		cin >> x;
		soma = soma + x;
	}
	
	media = (float)soma / n;

	// Mostrando a media
	cout << "soma = " << soma << endl;
	cout << "media = " << media << endl;

	return 0;
}
