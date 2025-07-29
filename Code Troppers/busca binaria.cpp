#include <bits/stdc++.h>

using namespace std;

int busca_binaria(int vetor[], int n, int q)// nao precisa colocar o valor ddentra do []
{
	int esq = 0;
	int dir = n - 1;
	int mid;
	while(esq <= dir)
	{
		mid = esq + (dir - esq) / 2;

		if(vetor[mid] == q)
			return mid;
		else if(vetor[mid] < q)
		{
			esq = mid + 1;// importante
		}
		else
		{
			dir = mid - 1;//importante
		}
	}
	return -1;
}


int main()
{
	int vetor[100];
	int n;

	cin >> n;

	//Entrada com os valores
	for(int i = 0; i < n; i++)
	{
		cin >> vetor[i];
	}

	//Ordenando o vetor crescente
	sort(vetor, vetor + n);

	cout << "Digete numero de buscas" << endl;
	int q;
	cin >> q;
	for(int i = 0; i < q; i++)
	{
		int x;
		cin >> x;

		int res = busca_binaria(vetor, n, x);
		if(res != -1)
			cout << "Valor encontrado: " << x << "na posicao: " << res << endl;
		else
			cout << "Valor nao econtrado" << endl;
	}
	return 0;
}
