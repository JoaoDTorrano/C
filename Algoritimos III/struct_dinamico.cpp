#include <iostream>
using namespace std;

struct dado
{
	int info1;
	int info2;
};

int main()
{
	dado *v; // ponteiro para struct
	
	v = new dado;
	
	v->info1 = 2;
	v->info2 = 4;
	
	cout << "info1 = " << v->info1 << endl;
	cout << "info2 = " << v->info2 << endl;
	
	delete v;
	return 0;
}