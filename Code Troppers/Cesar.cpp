#include <bits/stdc++.h>

using namespace std;

int main()
{
	char letra[50];
	int N;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int q;
		cin >> letra;
		cin >> q;

		for(int j = 0; j < strlen(letra); j++)
		{
			letra[j] = letra[j] - q;

			if(isalpha(letra[j]) == false)
			{
				letra[j] = letra[j] + 26;
			}
		}
		cout << letra;
	}

	return 0;
}
