#include <iostream>
using namespace std;

int main()
{
	int a;
	int *b = NULL;
	int c = 5;
	
	a = 2;
	b = &a; // &: endereco de
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl; // *b: conteudo apontado por b
	
	b = &c;
	cout << "b = " << b << endl;
	cout << "*b = " << *b << endl; // *b: conteudo apontado por b
	
	return 0;
}