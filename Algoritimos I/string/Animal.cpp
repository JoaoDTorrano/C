#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char ossada[50];// varivale que determina se é (vertebrado || ivertebrado)
	char reino[50];// variavel que deteermina se é (ave || mamifero || inseto || anelideo)
	char tipo[50];// variavel que determine se é (carnivoro || onivero || herbivero || hematofago)

// Entrada da variavel inicial
	cin.getline(ossada, 50);

// Analisa e mostra o ser vivo que esta procurando
	if(strcmp(ossada, "vertebrado") == 0)
	{
		cin.getline(reino, 50);

		if(strcmp(reino, "ave") == 0)
		{
			cin.getline(tipo, 50);

			if(strcmp(tipo , "carnivoro") == 0)
				cout << "aguia" << endl;

			else if(strcmp(tipo , "onivoro") == 0)
				cout << "pomba" << endl;
		}
		else if(strcmp(reino, "mamifero") == 0)
		{
			cin.getline(tipo, 50);

			if(strcmp(tipo , "onivero") == 0)
				cout << "homem" << endl;

			else if(strcmp(tipo , "herbivoro") == 0)
				cout << "vaca" << endl;
		}
	}
	else if(strcmp(ossada, "invertebrado") == 0)
	{
		cin.getline(reino, 50);

		if(strcmp(reino, "inseto") == 0)
		{
			cin.getline(tipo, 50);

			if(strcmp(tipo , "hematofago") == 0)
				cout << "pulga" << endl;

			else if(strcmp(tipo , "herbivoro") == 0)
				cout << "lagarta" << endl;
		}
		else if(strcmp(reino, "anelideo") == 0)
		{
			cin.getline(tipo, 50);

			if(strcmp(tipo , "hematofago") == 0)
				cout << "sanguessuga" << endl;

			else if(strcmp(tipo , "onivoro") == 0)
				cout << "minhoca" << endl;
		}
	}

	return 0;
}
