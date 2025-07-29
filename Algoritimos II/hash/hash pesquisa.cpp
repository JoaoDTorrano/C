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

int hash_search(dado T[], int m, int k)
{
	int i;
	int j;
	i = 0;

	do
	{
		j = hash1(k, i, m);
		if(T[j].k == k)
			return j;
		i++;
	}
	while(T[j].status != 0 && i < m);
	return -1;
}

int main()
{
	dado T[100];
	int k; // chave
	int m; // tamanho da tabela
	int i; // posicao na tabela
	int chave;
	int pos;

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

// Chave que sera pesquisada
	cin >> chave;

// Pesquisa a chave na tabela e retorna sua posicao
	pos = hash_search(T, m, chave);

	if(pos != -1)
		cout << "Chave " << chave << " encontrada na posicao " << pos << endl;
	else
		cout << "Chave " << chave << " nao encontrada" << endl;
	return 0;
}
