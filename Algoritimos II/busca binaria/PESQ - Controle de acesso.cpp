#include <iostream>
using namespace std;


int binaria(int IDS[], int tamanho, int ID)
{
	bool achou; // var aux p/ busca
	int baixo, meio, alto; // var aux
	baixo = 0;
	alto = tamanho - 1;
	achou = false;
	while ((baixo <= alto) && (achou == false))
	{
		meio = (baixo + alto) / 2;
		if (ID < IDS[meio])
			alto = meio - 1;
		else if (ID > IDS[meio])
			baixo = meio + 1;
		else
			achou = true;
	}
	if (achou)
		return meio;
	else
		return -1;
}

int main()
{
	int IDS[20]; // vetor que recebe as informacoes da lista IDS
	int ID; // Iforma a ID que quer ter acesso ao ambiente
	int i; // variavel que recebe as posicoes das infos da lista IDS
	int Tamanho; // Recebe o tamanho da lista IDS
	int IDSaux; // Variavel auxiliar do vetor IDS
	int pos; // Recebe a posicao da ID

	// Entra com as informacoes da lista IDS

	cin >> IDSaux;
	i = 0;

	while(IDSaux != -1)
	{
		IDS[i] = IDSaux;
		i++;

		cin >> IDSaux;
	}

	Tamanho = i;

	// Entra com a ID

	cin >> ID;

	pos = binaria(IDS, Tamanho, ID);

	// Mostra se tera acesso ao ambiente ou nao

	if(pos == -1)
		cout << "Nao possui acesso" << endl;
	else
		cout << "Possui acesso" << endl;

	return 0;
}
