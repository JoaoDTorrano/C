#include <iostream>
using namespace std;

int main()
{
	int vet[100];
	int n;
	int x;
	int cont = 0;
	int i;
	double porcent;
	
	cin >> n;
	
	for(i = 0; i < n; i++)
		cin >> vet[i];
	
	cin >> x;
	
	for(i = 0; i < n; i++)
	{
		if(vet[i] == x)
			cont++;
	}
	
	porcent = (double)cont / n;
	porcent = porcent * 100;
	cout << porcent << "%" << endl;
	
	 return 0;
}