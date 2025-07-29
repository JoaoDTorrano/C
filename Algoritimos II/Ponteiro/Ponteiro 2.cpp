#include <iostream>
using namespace std;

int main()
{
	int a = 2;
	int *b = NULL;
	int c = 5;

	cout << "a = " << a << endl;
	cout << "c = " << c << endl;

	b = &a; // &: endereco de
	*b = 7;
	b = &c;
	*b = 10;

	cout << "a = " << a << endl;
	cout << "c = " << c << endl;

	return 0;
}
