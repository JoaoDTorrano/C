#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector <int> v1, v2;
	int n;
	int n_troca = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int num_alunos;
		cin >> num_alunos;

		for(int j = 0; j < num_alunos; j++)
		{
			int num;
			cin >> num;

			v1.push_back(num);
			v2.push_back(-1 * num);
		}

		sort(v2.begin(), v2.end());

		for(int j = 0; j < num_alunos; j++)
		{
			if(-1 * v2[j] == v1[j])
			{
				n_troca++;
			}
		}
		cout << n_troca << endl;

		n_troca = 0;

		v1.clear();
		v2.clear();
	}


	return 0;
}
