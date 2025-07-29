#include <iostream>
// STRING
#include <cstring>
//
using namespace std;

int main()
{
	char nome[50];
	char sobrenome[50];

	strcpy(nome, "Vlad");// (string copia) ele copia da direita pra esquerda atribuindo na variavel nome
	strcpy(sobrenome, " Dracula");

	strcat(nome, sobrenome); // junta as duas strings nome e sobrenome
	cout << nome << endl;

	return 0;
}
