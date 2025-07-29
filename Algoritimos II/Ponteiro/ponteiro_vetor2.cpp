#include <iostream>
using namespace std;

int soma(int *v, int tam)
{
	int i;
	int s = 0;
	for(i = 0; i < tam; i++)
		s += v[i];
	return s;
	
}

int main()
{
	int *v = NULL; // ponteiro para o vetor
	int tam; // tamanho desejado para o vetor
	int i;
	
	cin >> tam;
	
	v = new int[tam]; // alocando memoria
	
	for(i = 0; i < tam; i++)
		v[i] = i * i;
	for(i = 0; i < tam; i++)
		cout << v[i] << endl;
	
	cout << "soma = " << soma(v, tam) << endl;
	
	delete [] v; // liberando a memoria alocada
	
	return 0;
}