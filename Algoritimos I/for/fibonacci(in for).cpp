#include <iostream>
using namespace std;

int main()
{
	int N;// controle ate que parte vai da sequencia 
	int i;// auxiliar
	int FN;// o ultimo da sequencia 
	int F1 = 0;// primeira parte da sequencia 
	int F2 = 1;//segunda parte da sequencia

	cin >> N;

	cout << F1 << " ";
	cout << F2 << " ";

	for(i = 3 ; i <= N ; i++)
	{
		cout << (F2 + F1) << " ";

		FN = F1;
		F1 = F2;
		F2 = F2 + FN;
	}

	return 0;
}
