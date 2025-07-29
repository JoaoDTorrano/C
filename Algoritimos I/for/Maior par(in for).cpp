#include <iostream>
using namespace std;

int main()
{
	int N;//quantidade de numeros a ser colocado
	int Nx;//os numeros
	int i;
	int Ma = -5000;//maior numero par

	cin >> N;

	for(i = 0; i < N; i++)
	{
		cin >> Nx;
		if(Nx % 2 == 0)// varre e separa os numeros pares
		{
			if(Nx > Ma)//acha os numeros maiores que Ma 
			{
				Ma = Nx;// ele transforma eles no Ma
			}
		}
	}

	cout << Ma << endl;// sainda assim o maior numero par
}
