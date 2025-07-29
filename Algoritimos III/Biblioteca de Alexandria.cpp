#include <iostream>
#include <string>
#include <locale>
using namespace std;

struct treenode
{
	int info;
	treenode *esq;
	treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, int x)
{
	if (p == NULL) // insere na raiz
	{
		p = new treenode;
		p->info = x;
		p->esq = NULL;
		p->dir = NULL;
	}
	else if (x < p->info) // insere na subarvore esquerda
		tInsere(p->esq, x);
	else // insere na subarvore direita
		tInsere(p->dir, x);
}

treenodeptr tPesq(treenodeptr p, int x)
{
	if (p == NULL) // elemento nao encontrado
		return NULL;
	else if (x == p->info) // elemento encontrado na raiz
		return p;
	else if (x < p->info) // procura na sub´arvore esquerda
		return tPesq(p->esq, x);
	else // procura na sub´arvore direita
		return tPesq(p->dir, x);
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int n;
	int x[10]; // variavel auxiliar para leitura de dados
	string op;

	treenodeptr arvore = NULL; // armazena os numeros

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> op;
		cin >> x[i];
		if(op == "i")
			tInsere(arvore, x[i]);
		else if(op == "b")
		{
			if(tPesq(arvore, x[i]) == NULL)
				cout << "Não" << endl;
			else
				cout << "Sim" << endl;

		}
	}

	return 0;
}
