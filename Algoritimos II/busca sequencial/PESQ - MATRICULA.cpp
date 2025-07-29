#include <iostream>
#include <cstring>
using namespace std;

struct infos
{
	char nome[50];
	char curso[50];
	int matricula;
};

int sequencial(infos aluno[], int nAlunos, char Aluno[])
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < nAlunos)
		achou = strcmp(aluno[i++].nome, Aluno) == 0;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main()
{
	infos aluno[100]; //Puxa os dados dos alunos
	int nAlunos; //Quantidade de alunos registrados
	int i; //Recebe as posicoes de cada aluno
	char Aluno[50]; //Nome do aluno que sera pesquisado
	int pos;//Recebe a posicao do aluno procurado

	//Entrada de quantidade de alunos e suas infos
	cin >> nAlunos;

	for(i = 0; i < nAlunos; i++)
	{
		cin.ignore();
		cin.getline(aluno[i].nome, 50);
		cin.getline(aluno[i].curso, 50);
		cin >> aluno[i].matricula;
	}

	//Nome do aluno que sera pesquisado
	cin.ignore();
	cin.getline(Aluno, 50);

	//Procurando aluno
	pos = 0;

	pos = sequencial(aluno, nAlunos, Aluno);

	//Saida das infos do aluno pesquisado
	if(pos == -1)
		cout << "Aluno nao localizado" << endl;
	else
	{
		cout << aluno[pos].nome << endl;
		cout << aluno[pos].curso << endl;
		cout << aluno[pos].matricula << endl;
	}

	return 0;
}
