#include <iostream>
using namespace std;

int fatorial(int n)
{
	if(n == 0) // condicao de parada
		return 1;
	else
		return n * fatorial(n - 1); // chamada recursiva
}

int main()
{
	int n;
	
	cin >> n;
	
	cout << fatorial(n) << endl;

	return 0;
}