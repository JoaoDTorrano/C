#include <iostream>
using namespace std;

struct dado
{
	int k;
	int status;
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
	int k[100];
	int kaux;
	int m;
	int j[100];
	dado T[20];
	int i;

	// Inicializa a tabela
	for ( i = 0; i < m; i++)
	{
		T[i].status = 0;
		T[i].k = -1;
	}

	cin >> m;

	cin >> kaux;
	while(k != 0)
	{
		k[i] = kaux;
		i++;
		cin >> kaux;
	}

	for(i = 0; i < m; i++)
		j[i] = hash_insert(T[], m, k);

	for(i = 0; i < m; i++)
		cout << j[i] << " ";


	return 0;
}
