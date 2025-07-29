#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct dado
{
	int matricula;
	int nota;
};

int main()
{
	string nomeArquivo;
	ifstream arq;
	dado aluno[1000];
	int i = 0;
	int n_alunos;
	int melhor;
	int pior;

	cin >> nomeArquivo;

	arq.open(nomeArquivo, ifstream::in);

	while(!arq.eof())
	{
		arq >> aluno[i].matricula >> aluno[i].nota;
		i++;
	}

	arq.close();

	n_alunos = i;

	int melhorNota = -1;
	int piorNota = 101;

	for(i = 0; i < n_alunos; i++)
	{
		if(melhorNota < aluno[i].nota)
		{
			melhorNota = aluno[i].nota;
			melhor = i;
		}
		else if(piorAluno > aluno[i].nota)
		{
			piorNota = aluno[i].nota;
			pior = i;
		}
	}
	
	cout << n_alunos << " alunos na turma" << endl;
	cout << "Melhor aluno: " << aluno[melhor].matricula << endl;
	cout << "Nota: " << aluno[melhor].nota << endl;
	cout << "Pior aluno: " << aluno[pior].matricula << endl;
	cout << "Nota: " << aluno[pior].nota << endl;
	
	return 0;
}
