#include <bits/stdc++.h>

using namespace std;


int busca_binaria(int vetor[], int n, int q)// nao precisa colocar o valor dentro do []
{
	int esq = 0;
	int dir = n - 1;
	int mid;
	int res = -1;
	while(esq <= dir)
	{
		mid = esq + (dir - esq) / 2;

		if(vetor[mid] == q)
		{
			res = mid;
			dir = mid - 1;
		}
		else if(vetor[mid] < q)
		{
			esq = mid + 1;// importante
		}
		else
		{
			dir = mid - 1;//importante
		}
	}
	return res;
}


int main()
{
	int vetor[10000];
	int posicoes[10000];
	int num_procurado[10000];
	int caso = 1;

	int n, q;

	cin >> n >> q;
	while(n != 0 || q != 0)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> vetor[i];
		}

		sort(vetor, vetor + n);


		for(int i = 0; i < q; i++)
		{
			int x;
			cin >> x;

			posicoes[i] = busca_binaria(vetor, n, x);
			num_procurado[i] = x;
		}

		cout << "CASE# " << caso << ":" << endl;

		for(int i = 0; i < q; i++)
		{
			if(posicoes[i] != -1)
				cout << num_procurado[i] << " found at " << posicoes[i] + 1 << endl;
			else
			{
				cout << num_procurado[i] << " not found" << endl;
			}
		}

		caso++;
		cin >> n >> q;
	}

	return 0;
}
