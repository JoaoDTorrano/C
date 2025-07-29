#include <iostream>
// STRING
#include <cstring>
//
using namespace std;

int main()
{
	char palavra1[50];
	char palavra2[50];
	int result;
	
	strcpy(palavra1, "bolacha");
	strcpy(palavra1, "anel");
	
	result = strcmp(palavra2, palavra1);
	cout << "result = " << result << endl; // se estiver em ordem alfabetica retornara "-1" se não ela retornara "1"
	
	if(result < 0)
		cout << "As palavras estao em ordem alfabetica" << endl;
	else
		cout << "As palavras nao estao em ordem alfabetica" << endl;
	
	return 0;
}
