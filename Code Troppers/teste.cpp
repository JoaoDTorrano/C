#include <iostream>
#include <string>
#include <locale> 
using namespace std;

int main()
{
	 setlocale(LC_ALL, "portuguese");
	
	string filme;
	char opcao;
	int escolha;

	while (opcao != '0')
	{
		cout << "Digite o nome do filme: ";
		getline(cin, filme);

		cout << "Digite 1 para ver as recomenda��es de filmes." << endl;
		cout << "Digite 2 para pesquisar outro filme." << endl;
		cout << "Digite 0 para sair." << endl;
		cin >> opcao;

		switch(opcao)
		{
		case '1':
			cout << "Recomenda��es de filmes para " << filme << ":" << endl;
			cout << "1. O Poderoso Chef�o" << endl;
			cout << "2. Forrest Gump" << endl;
			cout << "3. Matrix" << endl;
			cout << "4. A Lista de Schindler" << endl;
			cout << "5. Titanic" << endl;
			cout << "Escolha o Filme(1-5): ";
			cin >> escolha;



		case '0':
			cout << "Obrigado por usar o nosso programa!" << endl;
			break;

		default:
			cout << "Op��o inv�lida. Tente novamente." << endl;
			break;
		}
	}

	return 0;
}
