#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, R;
	while (cin >> N >> R)
	{
		vector<int> retornaram(R);
		for (int i = 0; i < R; i++)
		{
			cin >> retornaram[i];
		}
		sort(retornaram.begin(), retornaram.end());
		int id = 1;
		for (int i = 0; i < R; i++)
		{
			while (id < retornaram[i])
			{
				cout << id << " ";
				id++;
			}
			id++;
		}
		while (id <= N)
		{
			cout << id << " ";
			id++;
		}
		cout << endl;
	}
	return 0;
}
