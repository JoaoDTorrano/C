#include <iostream>

using namespace std;

int main()
{
	int mat[5][3]; // matriz
	int i, j; // linhas e colunas da matriz
	int nada = 0;


	while (nada != 15)
	{
		nada = 0;
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cin >> mat[i][j];

				if (mat[i][j] == 0)
					nada++;
			}
		}

		if (nada != 15)
		{
			if (mat[0][0] == 0 && mat[1][0] == 0 && mat[2][0] == 0 && mat[3][0] == 0 && mat[4][0] == 0 && mat[2][1] == 1)
			{
				cout << "ZERO" << endl;
			}
			if (mat[0][0] == 1 && mat[1][0] == 1 && mat[2][0] == 1 && mat[3][0] == 1 && mat[4][0] == 1 && mat[2][1] == 1)
			{
				cout << "UM" << endl;
			}
		}
	}


	return 0;
}
