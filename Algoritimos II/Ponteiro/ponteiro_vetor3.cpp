#include <iostream>
using namespace std;

void soma(int x[], int i, int *s)
{
	*s += x[i] ;
}

int main()
{
	int s1 = 0;
	int N;
	int x[10]
	
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
	    cin >> x[i];
	    soma(x, i, &s1);
	}
	cout << "soma = " << s1 << endl;
	
	return 0;
	
}