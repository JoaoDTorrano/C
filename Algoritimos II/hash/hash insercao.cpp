#include <iostream>
using namespace std;

struct dado
{
	int k;
	int status; // 0-vazio, 1-ocupado, 2-removido
};

int hash_aux(int k, int m)
{
	int h;
	h = k % m;
	if(h < 0)
		h += m;
	return h;
}

int hash1(int k, int i, int m)
{
	return (hash_aux(k, m) + i) % m;
}

int hash_insert(dado T[], int m, int k)
{
	int i;
	int j;
	i = 0;
	while(i != m)
	{
		j = hash1(k, i, m);
		if(T[j].status != 1)
		{
			T[j].k = k;
			T[j].status = 1;
			return j;
		}
		else
			i++;
	}
	return -1;
}

int main()
{
	dado T[100];
	int k; // chave
	int m; // tamanho da tabela
	int i; // posicao na tabela

// Entrada do tamanho da tabela
	cin >> m;

// Inicializa a tabela
	for ( i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

// Insere e mostra os valores na tabela
	cin >> k;
	while(k != 0)
	{
		hash_insert(T, m, k);
		cin >> k;
	}

	for(i = 0; i < m; i++)
		cout << T[i].k << " ";


	return 0;
}
