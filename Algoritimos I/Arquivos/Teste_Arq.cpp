#include <iostream>
#include <fstream>
#include <iomanip>


using namespace std;

int main()
{
	char nomearq[100]; // nome do arquivo
	ofstream arq; // handle para escrever o arquivo
	ifstream arq2;
	int i = 0;
	int j;
	float n[100];
	int m;
	float nAUX;

	// Lendo nome do arquivo
	cin.getline(nomearq, 100);

	// Lendo informacoes para o arquivo
	cin >> nAUX;
	while (nAUX != 0)
	{
		n[i] = nAUX;
		i++;
		cin >> nAUX;
	}

	m = i;


	// Gravando informacoes no arquivo com precisão de duas casas decimais
	arq.open(nomearq, ofstream::out);

	for (i = 0; i < m; i++)
	{
		arq << n[i] << endl;
	}

	// Fechando o arquivo
	arq.close();


	arq2.open(nomearq, ifstream::in);

	i = 0;

	while(!arq2.eof())
	{
		arq2 >> n[i];
		i++;
	}

	cout << fixed << setprecision(2);
	for (j = 0; j < i; j++)
	{
		cout << n[j] << endl;
	}

	arq2.close();

	return 0;
}
