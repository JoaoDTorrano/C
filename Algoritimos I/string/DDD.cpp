#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char estado[50];

	cin.getline(estado, 50);

	if(strcmp(estado, "Brasilia") == 0)
		cout << "61" << endl;
	else if(strcmp(estado, "Salvador") == 0)
		cout << "71" << endl;
	else if(strcmp(estado, "Sao Paulo") == 0)
		cout << "11" << endl;
	else if(strcmp(estado, "Rio de Janeiro") == 0)
		cout << "21" << endl;
	else if(strcmp(estado, "Juiz de Fora") == 0)
		cout << "32" << endl;
	else if(strcmp(estado, "Campinas") == 0)
		cout << "19" << endl;
	else if(strcmp(estado, "Vitoria") == 0)
		cout << "27" << endl;
	else if(strcmp(estado, "Belo Horizonte") == 0)
		cout << "31" << endl;
	else if(strcmp(estado, "Santa Rita do Sapucai") == 0)
		cout << "35" << endl;
	else
		cout << "DDD nao cadastrado" << endl;

	return 0;
}
