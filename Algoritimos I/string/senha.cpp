#include <iostream>
// STRING
#include <cstring>
//
using namespace std;

int main()
{
	char senha[50];

	cin.getline(senha, 50);
	while(strcmp(senha, "empalador") == 0) // Usar strcmp para comparar uma palavra com a outra
	{
		cout << "Senha errada: vai ser empalado!" << endl;
		cin.getline(senha, 50);

	}
	cout << "Pode entrar" << endl;

	return 0;
}
