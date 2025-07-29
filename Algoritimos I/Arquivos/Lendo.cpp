#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char nomearq[100]; // nome do arquivo
	char nomeFilme[100]; // nome do filme
	int ano; // ano de lancamento
	ifstream arq; // handle para ler arquivo

	// Lendo nome do arquivo
	cout << "Digite o nome do arquivo:" << endl;
	cin.getline(nomearq, 100);

	// Abrindo arquivo para leitura
	arq.open(nomearq, ifstream::in);
	
	// Lendo e mostrando infos do arquivo
	arq.getline(nomeFilme, 100);
	arq >> ano;
	
	cout << nomeFilme << endl;
	cout << ano << endl;
	
	// Fechando o arquivo
	arq.close();
	
	return 0;
}
