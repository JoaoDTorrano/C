#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	int N; // Numero de alunos
	char Aluno[50];
	int N1, N2, N3, N4;
	int soma;
	double media;
	int i;

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin.ignore();
		cin.getline(Aluno, 50);
		cin >> N1 >> N2 >> N3 >> N4;
		soma = N1 + (2 * N2) + (3 * N3) + (4 * N4);
		media = (double)soma / 10;

		cout << fixed << setprecision(2);
		cout << Aluno << ": " << media << endl;
	}
}
