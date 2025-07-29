#include <iostream>

using namespace std;

int main()
{
	int N;
	int x;
	int i;

	long long int Fib[60];

	Fib[0] = 0;
	Fib[1] = 1;

	for(i = 2; i < 60; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin >> x;
		cout << "Fib(" << x <<  ") = " << Fib[x] << endl;
	}
	
	return 0;
}
