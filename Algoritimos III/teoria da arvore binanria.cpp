#include <iostream>
using namespace std;

struct treenode
{
	int info;
	treenode *esq; // ponteiro para o filho esquerdo
	treenode *dir; // ponteiro para o filho direito
};

typedef treenode* treenodeptr;

int main()
{
	treenodeptr arvore = NULL; // ponteiro para a raiz da arvore
	treenodeptr t = NULL; // ponteiro auxiliar para varrer a arvore

	arvore = new treenode;
	arvore->info = 14;
	arvore->esq = NULL;
	arvore->dir = NULL;

	arvore->dir = new treenode;
	arvore->dir->info = 15;
	arvore->dir->esq = NULL;
	arvore->dir->dir = NULL;

	arvore->esq = new treenode;
	arvore->esq->info = 4;
	arvore->esq->esq = NULL;
	arvore->esq->dir = NULL;
	
	t = arvore;
	cout << "raiz: " << t->info << endl;
	
	t = arvore->dir;
	cout << "filho direito: " << t->info << endl;
	
	t = arvore->esq;
	cout << "filho esquerdo: " << t->info << endl;
	
	delete arvore;
	return 0;
}
