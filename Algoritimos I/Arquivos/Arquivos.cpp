#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char nomearq[100]; // nome do arquivo
	ofstream arq;// handle para escrever o arquivo
	char nomeFilme[100]; // nome do filme
	int ano; // ano de lancamento

	// Escolhendo nome do arquivo p/ guardar infos
	strcpy(nomearq, "dados.txt");

	// Lendo informacoes do filme
	cin.getline(nomeFilme, 100);
	cin >> ano;

	// Abrindo arquivo para escrita
	arq.open(nomearq, ofstream::out);
	
	// Gravando informacoes no arquivo
	arq << nomeFilme << endl;
	arq << ano << endl;
	
	// Fechando o arquivo
	arq.close();

	return 0;
}
