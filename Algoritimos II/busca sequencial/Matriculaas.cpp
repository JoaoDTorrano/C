#include <iostream>
using namespace std;

int sequencial(int nMatriculas[], int nAlunos, int Matricula)
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < nAlunos)
		achou = nMatriculas[i++] == Matricula;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main()
{
	int nAlunos; // Recebe o numero de alunos matriculado
	int nMatriculas[10000]; // Recebe a mtricula de cada estudante
	int i; // Recebe o corredor em que o estudante estudara
	int Matricula; // A matricula do estudante que quer saber seu corredor
	int corredor;// Recebe qual corredor onde aluno pesquisado esta

	// Entrada de numero de alunos e sua respectivas matriculas
	cin >> nAlunos;
	for(i = 0; i < nAlunos; i++)
		cin >> nMatriculas[i];

	// Entrada da matricula do aluno que quer saber seu corredor
	cin >> Matricula;

	// Verifica se o estudante esta matriculado
	// Pesquisa o corredor em que estudante estudara
	corredor = sequencial(nMatriculas, nAlunos, Matricula);

	//Mostra se o aluno esta matriculado e se esta em qual corredor estudara
	if(corredor != -1)
		cout << "Corredor " << corredor << endl;
	else
		cout << "Nao localizado" << endl;

	return 0;
}
