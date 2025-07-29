#include <iostream>
using namespace std;

int fib(int n)
{
	if(n == 0 || n == 1) // condicao de parada
		return 1;
	else
		return fib(n - 1) + fib(n - 2); // chamada recursiva
}

int main()
{
	int n;
	
	cin >> n;
	
	// n + 1 chamadas
	cout << fib(n) << endl;

	return 0;
}