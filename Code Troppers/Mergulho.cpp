#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, r;

	// Enquanto não chegar ao final do arquivo (EOF)
	while (cin >> n >> r)
	{
		vector<int> v(n);

		// Preenche o vetor com valores de 1 a n
		for (int i = 0; i < n; i++)
		{
			v[i] = i + 1;
		}

		int x;
		// Remove os elementos que retornaram do mergulho do vetor
		for (int i = 0; i < r; i++)
		{
			cin >> x;
			v[x - 1] = 0;
		}

		// Ordena o vetor em ordem crescente
		sort(v.begin(), v.end());

		bool todos_retornaram = true;
		// Imprime os elementos que não retornaram do mergulho
		for (int i = 0; i < n; i++)
		{
			if (v[i] != 0)
			{
				cout << v[i] << " ";
				todos_retornaram = false;
			}
		}

		// Imprime * se todos os voluntários retornaram
		if (todos_retornaram)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
