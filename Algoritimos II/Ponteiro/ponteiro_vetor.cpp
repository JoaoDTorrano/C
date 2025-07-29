#include <iostream>
using namespace std;

int main()
{
	int vetor[] = {2,5,1,4,7};
	int *p = NULL;
	int i;
	
	p = vetor;
	
	cout << *p << endl;
	p++;
	cout << *p << endl;
	
	return 0;
}