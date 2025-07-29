#include <iostream>
// STRING
#include <cstring>
//
using namespace std;

int main()
{
	char nome[50];
	char sobrenome[50];
	
	cin.getline(nome,50);// usar ao em vez de cin
	
	cout << "Boa tarde " << nome << endl;

	return 0;
}