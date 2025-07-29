#include <iostream>
using namespace std;

struct treenode
{
	int info;
	treenode *esq; // ponteiro para o filho esquerdo
	treenode *dir; // ponteiro para o filho direito
};

typedef treenode* treenodeptr;

void tInsere(treenodeptr &p, int x)
{
if (p == NULL) // insere na raiz
{
p = new treenode;
p->info = x;
p->esq = NULL;
p->dir = NULL;
}
else
if (x < p->info) // insere na subarvore esquerda
tInsere(p->esq,x);
else // insere na subarvore direita
tInsere(p->dir,x);
}

int main()
{
	treenodeptr arvore = NULL; // ponteiro para a raiz da arvore
	treenodeptr t = NULL; // ponteiro auxiliar para varrer a arvore
	
	tInsere(arvore,14);
	tInsere(arvore,15);
	tInsere(arvore,4);
	
	t = arvore;
	cout << "raiz: " << t->info << endl;
	
	t = arvore->dir;
	cout << "filho direito: " << t->info << endl;
	
	t = arvore->esq;
	cout << "filho esquerdo: " << t->info << endl;
	
	delete arvore;
	return 0;
}
